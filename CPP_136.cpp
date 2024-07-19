#include <vector>
#include <cassert>
#include <climits>

std::pair<int, int> largestSmallestIntegers(std::vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    return std::make_pair(largest_negative, smallest_positive);
}

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a == b;
}

int main() {
    assert (issame(largestSmallestIntegers({-6, -4, -4, -3, -100, 1}), std::make_pair(-3, 1)));
    return 0;
}
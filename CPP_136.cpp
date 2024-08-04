#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main(){
    std::vector<int> input = {-3, 5, -2, 7, 1};
    std::vector<int> expected_output = {-3, 1};
    
    assert(is_same(largest_smallest_integers(input), expected_output));
    
    return 0;
}
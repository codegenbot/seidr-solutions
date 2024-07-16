#include <vector>
#include <cassert>
#include <climits>

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

bool issame(std::vector<int> a,std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}
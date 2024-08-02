#include <climits>
#include <vector>

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    
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

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}
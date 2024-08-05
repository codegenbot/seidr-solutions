#include <vector>
#include <climits>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {0, 0};
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    
    for(int num : lst) {
        if(num < 0 && num > max_neg) {
            max_neg = num;
        } else if(num > 0 && num < min_pos) {
            min_pos = num;
        }
    }
    
    result[0] = max_neg == INT_MIN ? 0 : max_neg;
    result[1] = min_pos == INT_MAX ? 0 : min_pos;
    
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, -3}));
    
    return 0;
}
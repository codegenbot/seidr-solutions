#include <vector>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int max_negative = INT_MIN, min_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > max_negative) {
            max_negative = num;
        } else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }
    return {max_negative, min_positive};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
  
    return 0;
}
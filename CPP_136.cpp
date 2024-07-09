#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int largest_negative = 0, smallest_positive = 0;
    bool neg_set = false, pos_set = false;
    
    for (int num : lst) {
        if (num < 0 && (num < largest_negative || !neg_set)) {
            largest_negative = num;
            neg_set = true;
        } 
        if (num > 0 && (num < smallest_positive || !pos_set)) {
            smallest_positive = num;
            pos_set = true;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    return 0;
}
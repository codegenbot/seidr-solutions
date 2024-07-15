#include <vector>
#include <cassert>

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_neg = 0, smallest_pos = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_neg) {
            largest_neg = num;
        } else if (num > 0 && (num < smallest_pos || smallest_pos == 0)) {
            smallest_pos = num;
        }
    }
    return {largest_neg, smallest_pos};
}

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(is_same(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}
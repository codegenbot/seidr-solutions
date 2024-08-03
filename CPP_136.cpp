#include <cassert>
#include <vector>

bool largest_smallest_integers(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    int a_max = *max_element(a.begin(), a.end());
    int a_min = *min_element(a.begin(), a.end());

    int b_max = *max_element(b.begin(), b.end());
    int b_min = *min_element(b.begin(), b.end());

    return (a_max == b_max && a_min == b_min);
}

int main() {
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}, {-3, 1}));

    return 0;
}
#include <cassert>
#include <vector>

bool largest_smallest_integers(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;

    int min_a = *min_element(a.begin(), a.end());
    int min_b = *min_element(b.begin(), b.end());
    int max_a = *max_element(a.begin(), a.end());
    int max_b = *max_element(b.begin(), b.end());

    return (min_a == min_b) && (max_a == max_b);
}

int main() {
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}, {-3, 1}));

    return 0;
}
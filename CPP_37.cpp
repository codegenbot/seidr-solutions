#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<int>& l) {
    std::sort(l.begin(), l.end(), [](int a, int b) {
        return a % 2 == 0 && b % 2 == 0 ? a < b : a % 2 == 0;
    });
}

int main() {
    std::vector<int> vec{5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(vec); 
    assert((std::vector<int>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}) == vec); 
    return 0;
}
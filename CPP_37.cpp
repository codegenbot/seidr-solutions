#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<int>& l) {
    std::sort(l.begin(), l.end(), [](int a, int b) {
        if (a % 2 == 0 && b % 2 == 0) {
            return a < b; // Sort even numbers in ascending order
        } else {
            return a % 2 == 0; // Push even numbers before odd numbers
        }
    });
}

int main() {
    std::vector<int> vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(vec); 
    assert(std::equal(vec.begin(), vec.end(), std::vector<int>{-12, 8, 2, 4, 12, 5, 3, 11, 23, -10}.begin()));
    return 0;
}
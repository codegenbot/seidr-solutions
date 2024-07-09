#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> expected = {1, 3, 5, 7, 9};
    assert(get_odd_collatz(10) == expected);

    return 0;
}
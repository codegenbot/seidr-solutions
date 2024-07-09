#include <vector>
#include <algorithm>

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
    std::vector<int> output = get_odd_collatz(10);
    std::vector<int> expected_output = {1, 5, 3, 10};
    assert(output == expected_output);
    return 0;
}
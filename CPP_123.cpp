#include <vector>
#include <algorithm>

bool areSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    std::sort(result.begin(), result.end());
    return result;
}

int cpp_main() {
    if (!areSame({get_odd_collatz(12)}, std::vector<int>({1, 2, 6})))
        std::cerr << "Test failed: Expected {1, 2, 6}, got " << {get_odd_collatz(12)} << std::endl;
    return 0;
}
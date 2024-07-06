```cpp
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
    if (!issame({get_odd_collatz(12)}, {1, 2, 6})) {
        std::cerr << "Test failed: expected get_odd_collatz(12) to be {1, 2, 6} but got " << get_odd_collatz(12).size() << " elements: " << get_odd_collatz(12)[0];
        for (int i = 1; i < get_odd_collatz(12).size(); ++i)
            std::cerr << ", " << get_odd_collatz(12)[i];
        std::cerr << std::endl;
    }
    return 0;
}
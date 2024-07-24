```cpp
#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> res;
    while (n > 1) {
        if (n % 2 != 0) {
            res.push_back(n);
        }
        n = (n * 3 + 1);
    }
    return res;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    assert(get_odd_collatz(1) == {1});
    return 0;
}
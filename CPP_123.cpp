#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::vector<int> output = get_odd_collatz(num);

    if (issame({1}, output)) {
        std::cout << "The sequence is 1" << std::endl;
    } else {
        for (int i : output) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
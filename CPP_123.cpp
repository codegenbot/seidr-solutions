#include <iostream>
#include <vector>
#include <algorithm>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
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
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> result = get_odd_collatz(num);
    std::cout << "Collatz sequence: ";
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    if(same(get_odd_collatz(12), {6, 3, 1})) {
        std::cout << "The sequences are the same." << std::endl;
    } else {
        std::cout << "The sequences are not the same." << std::endl;
    }
    return 0;
}
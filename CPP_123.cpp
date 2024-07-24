#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> getOddCollatz(int n) {
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
    if (n <= 0) {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
        return 1;
    }
    std::vector<int> res = getOddCollatz(n);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void get_odd_collatz(int n) {
    std::vector<int> res;
    while (n > 1) {
        if (n % 2 != 0) {
            res.push_back(n);
        }
        n = (n * 3 + 1);
    }
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n <= 0) {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
        return 1;
    }
    get_odd_collatz(n);
    return 0;
}
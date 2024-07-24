#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> res(1); // Initialize with a size of 1
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
    std::vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    if (!res.empty()) {
        if (issame(res, get_odd_collatz(1))) {
            std::cout << "The sequence is the same as Collatz Conjecture." << std::endl;
        } else {
            std::cout << "The sequence does not match Collatz Conjecture." << std::endl;
        }
    } else {
        std::cout << "The sequence does not match Collatz Conjecture." << std::endl;
    }
    return 0;
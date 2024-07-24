#include <iostream>
#include <vector>

bool issame(int n1, int n2) {
    if (n1 == n2)
        return true;
    else
        return false;
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

int originalMain() {
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
        std::cout << "The sequence is the same as Collatz Conjecture." << std::endl;
    } else {
        std::cout << "The sequence does not match Collatz Conjecture." << std::endl;
    }
    return 0;
}

int main() {
    originalMain();
    return 0;
}
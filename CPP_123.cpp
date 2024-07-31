#include <iostream>
#include <vector>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    result.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
            if (n % 2 != 0) {
                result.push_back(n);
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::vector<int> odd_collatz = get_odd_collatz(n);

    std::cout << "Odd Collatz sequence for " << n << " is: ";
    for (int num : odd_collatz) {
        std::cout << num << " ";
    }

    return 0;
}
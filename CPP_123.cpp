#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
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

    std::vector<int> sequence = get_odd_collatz(num);

    if (issame({num}, sequence)) {
        std::cout << "The sequence of odd numbers for the Collatz Conjecture is: ";
        for (int i : sequence) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No odd numbers were found in the sequence." << std::endl;
    }

    return 0;
}
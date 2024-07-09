#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result; // stop storing numbers when n becomes 1
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::vector<int> sequence = get_odd_collatz(num);

    if (sequence.size() == 0) {
        std::cout << "The chain ending in 1 has no odd terms." << std::endl;
    } else {
        std::cout << "The odd Collatz sequence for " << num << " is: ";
        for (int i : sequence) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
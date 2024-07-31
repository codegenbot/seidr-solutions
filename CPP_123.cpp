#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> sequence;
    while (n != 1) {
        if (n % 2 != 0) {
            sequence.push_back(n);
        }
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    sequence.push_back(1); 
    return sequence;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::vector<int> odd_collatz = get_odd_collatz(n);

    std::cout << "Odd Collatz Sequence:" << std::endl;
    for (int num : odd_collatz) {
        std::cout << num << " ";
    }

    assert(get_odd_collatz(1) == std::vector<int>{1});

    return 0;
}
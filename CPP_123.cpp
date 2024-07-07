#include <vector>
#include <iostream>

bool isEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> getCollatz(int n) {
    std::vector<int> sequence;
    while (n > 1) {
        if (n % 2 != 0) {
            sequence.push_back(n);
        }
        if (n > 1) {
            n = n / 2;
        } else {
            break;
        }
        if (n % 2 == 0) {
            n = n / 2;
        }
    }
    return sequence;
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if (input < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return -1;
    }
    std::vector<int> output = getCollatz(input);
    for (int num : output) {
        std::cout << num << " ";
    }
    assert(isEqual(getCollatz(1), {1}));
    return 0;
}
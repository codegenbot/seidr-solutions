#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> sequence;
    while (n > 1) {
        if (n % 2 != 0) {
            sequence.push_back(n);
        }
        if (n == 1) {
            break;
        }
        n = n / 2;
    }
    return sequence;
}

bool isSame(std::vector<int> v1, std::vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if (input < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return -1;
    }
    std::vector<int> output = get_odd_collatz(input);
    for (int i : output) {
        std::cout << i << " ";
    }
    assert(isSame(get_odd_collatz(1), {1}));
    return 0;
}
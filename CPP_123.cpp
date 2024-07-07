```cpp
#include <vector>
#include <iostream>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> sequence;
    while (n > 1) {
        if (n % 2 != 0) {
            sequence.push_back(n);
        }
        n = (n + 1) / 2; 
    }
    return sequence;
}

bool issame(std::vector<int> const &a, std::vector<int> const &b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
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
    if (!issame({1}, {1})) {
        std::cout << "The sequences are not the same." << std::endl;
    }
    return 0;
}
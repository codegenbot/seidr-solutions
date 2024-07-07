```c
#include <iostream>
#include <vector>

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    if(input < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return -1;
    }
    std::vector<int> output = getOddCollatz(input);
    for (int num : output) {
        std::cout << num << " ";
    }
    assert(isSame(getOddCollatz(1), {1}));
    return 0;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> getOddCollatz(int input) {
    std::vector<int> sequence;
    while(input > 1) {
        if(input % 2 == 0) input /= 2;
        else input = 3 * input + 1;
        sequence.push_back(input);
    }
    return sequence;
}
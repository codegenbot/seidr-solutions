#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void readInput(std::vector<int>& input) {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    input.resize(n);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input[i] = temp;
    }
}

int main() { 
    std::vector<int> input;
    readInput(input);

    if(input.size() == 0) {
        std::cout << "No elements entered. Please try again." << std::endl;
    } else {
        assert(std::abs(*std::max_element(input.begin(), input.end()) - 124) < 1e-4);
    }

    return 0;
}
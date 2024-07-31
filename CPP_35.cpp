#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<int> input;
int n;

void readInput() {
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    input.resize(n, 0);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }
}

int main() { 
    readInput();

    if(input.size() == 0) {
        std::cout << "No elements entered. Please try again." << std::endl;
    } else {
        int max_element = *std::max_element(input.begin(), input.end());
        std::cout << "Maximum element is: " << max_element << std::endl;

        assert(std::abs(max_element - 124) < 1e-4);
    }

    return 0;
}
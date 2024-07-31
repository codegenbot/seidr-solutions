#include <iostream>
#include <vector>
#include <algorithm>

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

int program() { 
    std::vector<int> input;
    readInput(input);

    if(input.size() == 0) {
        std::cout << "No elements entered. Please try again." << std::endl;
    } else {
        auto maxElement = *std::max_element(input.begin(), input.end()); // Add std namespace
        std::cout << "Maximum element is: " << maxElement << std::endl;
    }

    return 0;
}
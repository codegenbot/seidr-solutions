#include <iostream>
#include <vector>
#include <algorithm>

void readInput(std::vector<int>& input) {
    size_t n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    input.resize(n);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input[i] = temp;
    }
}

int contestMain() { 
    std::vector<int> input;
    readInput(input);

    if(input.size() == 0) {
        std::cout << "No elements entered. Please try again." << std::endl;
    } else {
        auto maxElement = *std::max_element(input.begin(), input.end()); 
        std::cout << "Maximum element is: " << maxElement << std::endl;

        assert(std::abs(*std::max_element(input.begin(), input.end()) - 124) < 1e-4);
    }

    return 0;
}
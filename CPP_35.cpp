#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> input;
int n;

void readInput() {
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    input.resize(n);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }
}

int mainFunction() { 
    readInput();

    if(input.size() == 0) {
        std::cout << "No elements entered. Please try again." << std::endl;
    } else {
        auto myMaxElement = *std::max_element(input.begin(), input.end());
        std::cout << "Maximum element is: " << myMaxElement << std::endl;
    }

    return 0;
}
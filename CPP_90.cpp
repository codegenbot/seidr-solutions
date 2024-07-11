#include <iostream>
#include <vector>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) {
        std::cout << "Error: The list must contain at least two elements." << std::endl;
        return -1; 
    }
    for (int i = 0; i < sorted.size()-1; i++) {
        if (sorted[i] != sorted[i+1]) {
            return sorted[i+1];
        }
    }
    std::cout << "Error: The list is already sorted." << std::endl;
    return -1; 
}
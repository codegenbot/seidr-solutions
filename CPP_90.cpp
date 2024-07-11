#include <iostream>
#include <algorithm>
#include <vector>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; 
    for (int i = 0; i < sorted.size()-1; i++) {
        if (sorted[i] != sorted[i+1]) {
            std::cout << "The next smallest element is: " << sorted[i+1] << std::endl;
            return sorted[i+1];
        }
    }
    std::cout << "There are no smaller elements." << std::endl;
    return -1; 
}
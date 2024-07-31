#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }
    
    if ((array.front() + array.back()) % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main() {
    std::vector<int> input = {5, 2, 8, 1, 9}; // Example input array
    std::vector<int> sorted_array = sort_array(input);
    
    for (int num : sorted_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
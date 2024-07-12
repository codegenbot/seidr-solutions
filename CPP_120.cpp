#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximumSubarray(std::vector<int> arr, int k);

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }
    
    return 0;
}
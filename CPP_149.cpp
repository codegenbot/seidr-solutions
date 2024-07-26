#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sorted_list_sum(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result = a;
    result.insert(result.end(), b.begin(), b.end());
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> vec1 = {3, 1, 4, 1, 5};
    std::vector<int> vec2 = {2, 7, 1, 8, 2};
    
    std::vector<int> sorted_sum = sorted_list_sum(vec1, vec2);
    
    for (const auto& num : sorted_sum) {
        std::cout << num << " ";
    }
    
    if (issame(vec1, vec2)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are different." << std::endl;
    }
    
    return 0;
}
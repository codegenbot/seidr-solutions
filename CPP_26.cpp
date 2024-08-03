#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

std::vector<int> remove_duplicates(std::vector<int> vec) {
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sortedA = a;
    std::vector<int> sortedB = b;
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    input = remove_duplicates(input);
    
    for (int num : input) {
        std::cout << num << " ";
    }
    
    return 0;
}
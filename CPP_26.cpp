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
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> input(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    input = remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));
    
    return 0;
}
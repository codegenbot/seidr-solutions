```cpp
#include <iostream>
#include <vector>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> removeDuplicates(const std::vector<int>& numbers) {
    std::set<int> uniqueNumbers(numbers.begin(), numbers.end());
    return std::vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
}

int main() {
    int n;    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    
    std::vector<int> uniqueNumbers = removeDuplicates(numbers);
    
    if (!issame(numbers, uniqueNumbers)) {
        std::cout << "Unique numbers: ";
        for (int num : uniqueNumbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }
    
    assert(issame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
    return 0;
}
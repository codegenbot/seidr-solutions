```cpp
#include <iostream>
#include <vector>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() == 0 && b.size() == 0) return true;
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> removeDuplicates(const std::vector<int>& numbers) {
    std::unordered_set<int> uniqueNumbers(numbers.begin(), numbers.end());
    std::vector<int> result(uniqueNumbers.begin(), uniqueNumbers.end());
    return result;
}

int main() {
    int n;    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> numbers;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
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
#include <iostream>
#include <vector>
#include <set>

bool operator()(const int& a, const int& b) const {
    return a > b;
}

bool isEqualVector(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() == 0 && b.size() == 0) return true;
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> removeDuplicates(const std::vector<int>& numbers) {
    if (numbers.empty()) return std::vector<int>();

    std::map<int, int> uniqueNumbersCount;
    for (int num : numbers) {
        uniqueNumbersCount[num]++;
    }

    std::vector<int> uniqueNumbers;
    for (auto it = uniqueNumbersCount.begin(); it != uniqueNumbersCount.end(); ++it) {
        for (int i = 0; i < it->second; i++) {
            uniqueNumbers.push_back(it->first);
        }
    }

    return uniqueNumbers;
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

    if (!isEqualVector(numbers, removeDuplicates(numbers))) {
        std::cout << "Unique numbers: ";
        for (int num : removeDuplicates(numbers)) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }

    if (!isEqualVector(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5})) {
        std::cout << "All elements are not duplicates." << std::endl;
    } else {
        std::cout << "All elements are duplicates." << std::endl;
    }
}
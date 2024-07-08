```
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(std::to_string(num));
        }
    }
    std::sort(numbers.begin(), numbers.end());
    std::reverse(numbers.begin(), numbers.end());
    return numbers;
}

std::vector<int> readNumbers(int n) {
    std::vector<int> arr;    
    for(int i=0; i<n; i++) {
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        arr.push_back(number);
    }
    return arr;
}

int main() {
    int n;
    std::cout << "How many numbers do you want to enter? ";
    std::cin >> n;
    std::vector<int> arr = readNumbers(n);
    std::vector<std::string> result = by_length(arr);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    if (issame(by_length({9, 4, 8}) , {"Eight", "Four", "Nine"})) {
        std::cout << "The results are the same." << std::endl;
    } else {
        std::cout << "The results are different." << std::endl;
    }
    return 0;
}
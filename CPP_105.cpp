```
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool isSame(const std::vector<std::string>& left, const std::vector<std::string>& right) {
    if(left.size() != right.size()) {
        return false;
    }
    for(size_t i = 0; i < left.size(); ++i) {
        if(left[i] != right[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> byLength(const std::vector<int>& arr) {
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

int main() {
    std::vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        arr.push_back(n);
    }
    std::vector<std::string> result = byLength(arr);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    if(isSame(byLength({9, 4, 8}), {"Eight", "Four", "Nine"})) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same." << std::endl;
    }
    return 0;
}
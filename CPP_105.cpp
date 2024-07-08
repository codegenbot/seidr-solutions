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

std::vector<std::my_string> by_length(const std::vector<int>& arr) {
    std::vector<std::my_string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(std::to_string(num));
        }
    }
    std::sort(numbers.begin(), numbers.end());
    std::reverse(numbers.begin(), numbers.end());
    return numbers;
}

std::vector<int> input() {
    std::vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        arr.push_back(n);
    }
    return arr;
}

int main() {
    std::vector<int> arr = input();
    std::vector<std::my_string> result = by_length(arr);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    if(issame(by_length({9, 4, 8}) , {"Eight", "Four", "Nine"}))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;
    return 0;
}
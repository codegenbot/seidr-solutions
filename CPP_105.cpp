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

int main() {
    std::vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        arr.push_back(n);
    }
    std::vector<std::string> result = by_length(arr);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    // Use the issame function
    assert(issame(by_length({9, 4, 8}) , {"Eight", "Four", "Nine"}));
    return 0;
}
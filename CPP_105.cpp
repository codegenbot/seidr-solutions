```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a == b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    std::vector<int> arr;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        arr.push_back(n);
    }
    std::vector<string> result = by_length(arr);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    return 0;
}

std::vector<string> by_length(std::vector<int> arr) {
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
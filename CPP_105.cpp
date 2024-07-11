```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    if (a > 9 || b > 9) {
        return false;
    }
    std::vector<std::string> result = by_length({a, b});
    for (int i = 0; i < std::min(result.size(), 2); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }
    
    std::sort(numbers.begin(), numbers.end());
    
    std::reverse(numbers.begin(), numbers.end());
    
    std::vector<std::string> result;
    for (int num : numbers) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }
    
    return result;
}
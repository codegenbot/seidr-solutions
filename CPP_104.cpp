#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(int a, int b) {
    return a < b;
}

std::vector<int> unique_digits(const std::vector<int>& nums) {
    std::vector<int> result;

    for (int num : nums) {
        std::string numStr = std::to_string(num);
        std::string uniqueStr = "";
        
        for (char digit : numStr) {
            if (uniqueStr.find(digit) == std::string::npos) {
                uniqueStr += digit;
            }
        }
        
        result.push_back(std::stoi(uniqueStr));
    }
    
    std::sort(result.begin(), result.end(), issame);
    
    return result;
}

int main() {
    assert((unique_digits({135, 103, 31}) == std::vector<int>({31, 135})));
    return 0;
}
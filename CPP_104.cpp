#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    std::string s1 = std::to_string(x);
    std::string s2 = std::to_string(y);
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;
}

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            bool unique = true;
            for (int res : result) {
                if (issame(res, num)) {
                    unique = false;
                    break;
                }
            }
            if (unique) {
                result.push_back(num);
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> input = {135, 103, 31};
    std::vector<int> output = unique_digits(input);
    
    std::vector<int> expected_output = {31, 135};
    
    if (output == expected_output) {
        std::cout << "Test case passed\n";
    } else {
        std::cout << "Test case failed\n";
    }
    
    return 0;
}
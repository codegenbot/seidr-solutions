#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b){
        if (a.size() != b.size()) {
            return false;
        }
        return std::equal(a.begin(), a.end(), b.begin());
    }
    
    bool unique_digits(int n) {
        std::vector<int> digits;
        while (n > 0) {
            int digit = n % 10;
            if (std::find(digits.begin(), digits.end(), digit) != digits.end()) {
                return false;
            }
            digits.push_back(digit);
            n /= 10;
        }
        return true;
    }
}
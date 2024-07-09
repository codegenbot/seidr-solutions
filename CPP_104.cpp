#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b){
        if (a.size() != b.size()) {
            return false;
        }
        return std::equal(a.begin(), a.end(), b.begin());
    }

    bool unique_digits(std::vector<int> vec){
        std::vector<int> digits(10, 0);
        for (int num : vec) {
            while (num > 0) {
                if (digits[num % 10] > 0) {
                    return false;
                }
                digits[num % 10]++;
                num /= 10;
            }
        }
        return true;
    }
}
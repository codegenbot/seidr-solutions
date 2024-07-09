#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

namespace CPPL104 {
    bool issame(std::vector<int> a, std::vector<int> b) {
        if (a.size() != b.size()) {
            return false;
        }
        return std::equal(a.begin(), a.end(), b.begin());
    }

    bool unique_digits(std::initializer_list<int> digits) {
        // Implement the unique_digits function here
        // Return true if all the digits are unique, false otherwise
    }
}
Solution:

#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b_) {
    if (a.size() != b_.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b_[i]) {
            return false;
        }
    }

    return true;
}
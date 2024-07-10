```cpp
#include <vector>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> input) {
    std::sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++) {
        if (input[i].size() > 1) {
            char firstChar = input[i][0];
            for (int j = i + 1; j < input.size(); j++) {
                if (input[j][0] == firstChar) {
                    input.erase(input.begin() + j);
                    j--;
                }
            }
        }
    }
    return input;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b, std::vector<std::string> c) {
    if (a.size() != b.size() || a.size() != c.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i], c[i])) {
            return false;
        }
    }
    return true;
}
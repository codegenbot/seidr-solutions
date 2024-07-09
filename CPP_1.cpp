```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> vec1, vector<string> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

void separate_paren_groups(vector<string>& result, int open_count) {
    string current_group = "";
    for (int i = 0; i < open_count; i++) {
        current_group += '(';
    }
    for (char c : current_group) {
        if (c == '(') {
            for (int j = 0; j < open_count; j++) {
                result.push_back(std::string(1, '('));
            }
        } else {
            result.push_back(std::string(1, ')'));
        }
    }
}

int main() {
    int open_count;
    std::cin >> open_count;

    vector<string> result;
    separate_paren_groups(result, open_count);

    return 0;
}
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
    while (open_count > 0) {
        current_group += ')';
        open_count--;
    }
    result.push_back(current_group);
}

int main() {
    int open_count;
    std::cin >> open_count;

    vector<string> result;
    string current_group = "";
    for (int i = 0; i < open_count; i++) {
        current_group += '(';
    }
    while (open_count > 0) {
        current_group += ')';
        open_count--;
    }
    result.push_back(current_group);

    if (open_count > 0) {
        string last_group = "";
        for (int i = 0; i < open_count; i++) {
            last_group += '(';
        }
        while (open_count > 0) {
            last_group += ')';
            open_count--;
        }
        result.push_back(last_group);
    }

    // Add your unit tests here. For example:
    assert(issame(result, {"()", "(())", "(()())"}));
    
    return 0;
}
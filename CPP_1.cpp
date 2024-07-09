```cpp
#include <iostream>
#include <vector>
#include <string>

void separate_paren_groups(vector<string>& result, int open_count);

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
    separate_paren_groups(result, open_count);

    // add the last group
    if (open_count > 0) {
        string current_group = "";
        while (open_count > 0) {
            current_group += ')';
            open_count--;
        }
        result.push_back(current_group);
    }

    return 0;
}
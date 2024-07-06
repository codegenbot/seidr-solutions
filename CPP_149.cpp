```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
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

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<string> a = {"hello", "world", "abc", "abcd"};
    vector<string> b = {"hello", "world", "pqr", "pqrs"};
    
    if (issame(sorted_list_sum(a), sorted_list_sum(b))) {
        std::cout << "The lists are same" << std::endl;
    } else {
        std::cout << "The lists are not same" << std::endl;
    }
    
    return 0;
}
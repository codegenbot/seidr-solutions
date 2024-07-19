#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> lst = {"hello", "world", "abc", "abcd"};
    std::vector<std::string> result = sorted_list_sum(lst);

    assert(issame(result, {"abcd", "abc"}));

    for (const auto& str : result) {
        std::cout << str << " ";
    }
    return 0;
}

std::vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}
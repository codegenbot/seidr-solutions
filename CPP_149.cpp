```
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const string& a, const string& b){ return a.length() % 2 == 1; });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length())
                 return a.length() < b.length();
             else
                 return a < b;
         });
    return lst;
}

#include <iostream>

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> result = sorted_list_sum(lst);
    bool same = issame(result, {"cc", "dd", "aaaa", "bbbb"});
    assert(same);
    std::cout << "Result: ";
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}
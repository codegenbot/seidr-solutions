```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

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

vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
bool same = issame(sorted_list_sum(lst), {"cc", "dd", "aaaa", "bbbb"});
assert(same);
std::cout << "Result: ";
for (const auto& str : sorted_list_sum(lst)) {
    std::cout << str << " ";
}
std::cout << std::endl;
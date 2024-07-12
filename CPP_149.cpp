#include <initializer_list>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
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

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> result = sorted_list_sum(lst);
    
    assert(issame(result, {"cc", "dd", "aaaa", "bbbb"}));
}
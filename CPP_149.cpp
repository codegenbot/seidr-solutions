```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
                      [](const string& a, const string& b){ return (stoi(a.substr(0,1)) % 2 != 0); });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end());
    return lst;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}
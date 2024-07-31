```cpp
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

pair<vector<string>, bool> reverse_delete(string s1, string s2) {
    int i = 0, j = s2.size() - 1;
    vector<string> result;
    while (i <= j) {
        if (s1[i] != s2[j]) return make_pair(result, false);
        i++; j--;
        result.push_back(s1.substr(0, i));
    }
    return make_pair({{"",}}, true);
}

int main() {
    auto p = reverse_delete("mamma", "mia");
    assert(issame(vector<string>({""}), vector<string>({{""}, string("True")))));
    return 0;
}
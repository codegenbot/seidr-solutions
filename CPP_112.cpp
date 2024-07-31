#include <vector>
#include <string>
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
    string s1 = p.first[0];  
    string s2 = (p.second) ? "True" : "False"; 
    assert(issame({s1}, {s2}));
    return 0;
}
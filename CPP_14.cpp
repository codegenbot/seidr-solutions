```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (b.size() != a.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for(int i = 1; i <= str.size(); i++){
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW"), vector<string>({"W", "WW", "WWW"})));
    return 0;
}
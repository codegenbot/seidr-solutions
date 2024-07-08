#include <vector>
#include <string>
#include <assert.h>

bool issame(const vector<string>& a, const vector<string>& c) {
    if(a.size() != c.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != c[i])
            return false;
    return true;
}

vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW"), vector<string>({"", "W", "WW", "WWW"})));
    return 0;
}
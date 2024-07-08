#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<string> allPrefixes(const string& str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    vector<string> prefixes = allPrefixes("WWW"); 
    assert(same(prefixes, {"", "W", "WW", "WWW"}));
    return 0;
}
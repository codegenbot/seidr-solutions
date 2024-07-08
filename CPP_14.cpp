#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
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
    const std::string s = "WWW";
    vector<string> prefixes = all_prefixes(s);
    vector<string> expected = {"", "W", "WW", "WWW"};
    assert(issame(prefixes, expected));
    return 0;
}
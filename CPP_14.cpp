```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> all_prefixes(const std::string& str);

int main() {
    assert(issame(all_prefixes("WWW"), {"", "W", "WW", "WWW"}));
    return 0;
}

bool issame(const vector<string>& a, const vector<string>& b) {
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
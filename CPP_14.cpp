#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for(int i = 1; i <= str.length(); i++){
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    vector<string> result = all_prefixes("WWW");
    assert(issame(result, {"W", "WW", "WWW"}));
    return 0;
}
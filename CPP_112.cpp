#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string t) {
    std::vector<std::string> result;
    for(int i = 0; i < s.size(); i++) {
        if(std::find(t.begin(), t.end(), s[i]) != t.end()) continue;
        result.push_back(s.substr(i, 1));
    }
    return result;
}

int main() {
    assert((reverse_delete("mamma", "mia")) == (std::vector<std::string>{{"ma","True"}}));
    return 0;
}
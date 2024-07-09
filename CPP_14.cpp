#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.length(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool verifyPrefixes(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;

}

int main() {
    std::vector<std::string> b = {"W", "WW", "WWW"};
    assert(verifyPrefixes(all_prefixes("WWW"), b));
    return 0;
}
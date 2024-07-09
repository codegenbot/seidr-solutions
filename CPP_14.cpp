#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.length(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}
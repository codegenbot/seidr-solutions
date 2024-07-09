#include <set>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& other) {
    return std::set<std::string>(a.begin(), a.end()) == std::set<std::string>(other.begin(), other.end());
}

std::vector<std::string> allPrefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(isSame(allPrefixes("WWW"), std::vector<std::string>{"W", "WW", "WWW"})); 
    return 0;
}
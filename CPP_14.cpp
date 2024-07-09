```c
#include <string>
#include <vector>

std::string isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a.size() == b.size()) ? "True" : "False";
}

std::vector<std::string> all_prefixes(std::string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(isSame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
}
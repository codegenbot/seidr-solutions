#include <vector>
#include <string>

bool areSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(areSame(all_prefixes("WWW"), {"W", "WW", "WWW"}) && "Failed");
    return 0;
}
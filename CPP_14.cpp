#include <string>
#include <vector>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a == b)
        return true;
    else
        return false;
}

std::vector<std::string> all_prefixes(std::string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(isSame(all_prefixes("WWW"), std::vector<std::string>{"W", "WW", "WWW"}));
}
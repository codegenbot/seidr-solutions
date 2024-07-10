#include <vector>
#include <string>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for(int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a == b);
}

int main() {
    assert(isSame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}
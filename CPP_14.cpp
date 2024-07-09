#include <vector>
#include <string>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    if (all_prefixes("WWW") == std::vector<std::string>({"W", "WW", "WWW"})) {
        return 0;
    } else {
        return 1;
    }
}
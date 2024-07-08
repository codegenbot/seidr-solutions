#include <vector>
#include <string>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i < v1.size(); i++)
        if(v1[i] != v2[i])
            return false;
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW"), std::vector<std::string>({"", "W", "WW", "WWW"})));
    return 0;
}
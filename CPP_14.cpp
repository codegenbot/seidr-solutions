```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return std::vector<std::string>(result);
}

int main() {
    assert(issame(all_prefixes("WWW") , {"W", "WW", "WWW"}));
}
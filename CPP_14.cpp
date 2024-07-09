```
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.length(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        std::cout << "Error: Vectors are not the same size." << std::endl;
        return false;
    } else {
        for(int i = 0; i < a.size(); ++i) {
            if(a[i] != b[i]) {
                std::cout << "Error: Vectors contain different elements." << std::endl;
                return false;
            }
        }
        return true;
    }
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}
```
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> a, std::string prefix) {
    std::vector<std::string> result;
    for (std::string s : a) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (std::string s : a) {
        if (find(b.begin(), b.end(), s) == b.end()) 
            return false;
    }
    return true;
}

int main { return 0; }
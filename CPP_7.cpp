#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

std::vector<std::string> filterBySubstring(const std::vector<std::string>& str, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& s : str) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> str = {"grunt", "trumpet", "prune", "gruesome"};
    auto result = filterBySubstring(str, "run");
    
    for (const auto& s : result) {
        std::vector<std::string> v2 = {s};
        if (!issame({s}, v2)) { 
            return 1; 
        }
    }
}
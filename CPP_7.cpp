#include <vector>
#include <string>

bool checkSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filteredStrings(const std::vector<std::string>& str, const std::string& substring) {
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
    auto result = filteredStrings(str, "run");
    
    for (const auto& s : result) {
        if (!checkSame({s}, std::vector<std::string>({"grunt", "prune"}))) {
            return 1; // returning with error
        }
    }
}
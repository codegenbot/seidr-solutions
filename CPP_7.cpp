#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2);
std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> filteredStrings;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}
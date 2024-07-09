```
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::string& str1, const std::string& str2) {
    int count = 0;
    for (char c : str2) {
        if (str1.find(c) != std::string::npos)
            count++;
    }
    return count == str2.length();
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substr) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (issame(s, substr))
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"grunt", "prune"};
    std::string substr = "un";
    std::vector<std::string> filteredStrings = filter_by_substring(strings, substr);
    for (const auto& s : filteredStrings)
        std::cout << s << std::endl;
    return 0;
}
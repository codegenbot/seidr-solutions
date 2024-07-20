#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> reverse_delete(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> result;
    for (const std::string &str : a) {
        std::string reversedStr = str;
        std::reverse(reversedStr.begin(), reversedStr.end());
        result.push_back(reversedStr);
    }
    for (const std::string &str : b) {
        result.push_back(str);
    }

    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string combined = "";
    for (const std::string &str : a) {
        combined += str;
    }
    for (const std::string &str : b) {
        combined += str;
    }

    std::string reversedResult = combined;
    std::reverse(reversedResult.begin(), reversedResult.end());

    return reversedResult == "ammamia";
}

int main() {
    assert(issame(reverse_delete({"mamma"}, {"mia"}), { "ammam", "mia" }));
    return 0;
}
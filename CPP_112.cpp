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

    std::string uniqueChars = "";
  
    for (char ch : combined) {
        if (uniqueChars.find(ch) == std::string::npos) {
            uniqueChars += ch;
        }
    }

    std::string reversedUniqueChars = uniqueChars;
    std::reverse(reversedUniqueChars.begin(), reversedUniqueChars.end());

    return reversedUniqueChars == "euarT";
}

int main() {
    assert(issame(reverse_delete({"mamma"}, {"mia"}), {}));
    return 0;
}
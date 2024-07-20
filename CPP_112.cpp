#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string combined = "";
    for (const std::string& str : a) {
        combined += str;
    }
    for (const std::string& str : b) {
        combined += str;
    }

    std::string result = "";
    for (char ch : combined) {
        if (result.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    std::reverse(result.begin(), result.end());
    return result == "euarT";
}

int main() {
    assert(issame({"mamma"}, {"mia"}));
    return 0;
}
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string original = result;
    std::reverse(result.begin(), result.end());
    return {original, (original == result) ? "True" : "False"};
}
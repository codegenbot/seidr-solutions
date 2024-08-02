#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::string result = "";
    for (const std::string& str : a) {
        for (char ch : str) {
            if (b[0].find(ch) == std::string::npos) {
                result += ch;
            }
        }
    }
    
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    
    return result == result_reversed;
}

int main() {
    assert(issame({"mamma"}, {"mia"}));
    return 0;
}
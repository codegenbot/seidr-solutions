#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::pair<std::string, bool> reverse_delete(const std::string& a, const std::string& b) {
    std::string result = "";
    for (char ch : a) {
        if (b.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return { result, result == result_reverse };
}

int main() {
    assert(isSame(reverse_delete("mamma", "mia"), {"", true}));
    return 0;
}
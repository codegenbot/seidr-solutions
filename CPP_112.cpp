#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result.push_back(std::string(1, ch));  
        }
    }
    std::string result_str = "";
    for (const auto &str : result) {
        result_str += str;
    }
    std::string result_reverse = result_str;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return { result_str, result_str == result_reverse ? "True" : "False" };
}

int main() {
    assert(is_same(reverse_delete("mamma", "mia"), std::vector<std::string>{"mm", "False"}));
    return 0;
}
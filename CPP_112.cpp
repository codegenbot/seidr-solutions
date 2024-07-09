#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    return { result, issame({result, result_reversed}, {"", result}) ? "True" : "False" };
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");

    std::cout << "Resulting string after deletion: " << result[0] << std::endl;
    std::cout << "Is resulting string same as its reverse: " << result[1] << std::endl;

    assert(issame(result, std::vector<std::string>{"", "True"}));

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

void reverse_delete(std::string s, const std::string& c) {
    std::string result;
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    std::cout << result << " " << (issame(result, result_reversed) ? "True" : "False") << std::endl;
}

int main() {
    std::string s = "example string";
    std::string c = "aeiou";

    reverse_delete(s, c);

    return 0;
}
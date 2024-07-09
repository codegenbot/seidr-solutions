#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
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
    return { result, issame(result, result_reversed) ? "True" : "False" };
}

int main() {
    std::string s, c;
    std::cout << "Enter the original string (s): ";
    std::cin >> s;
    std::cout << "Enter the characters to delete (c): ";
    std::cin >> c;

    std::vector<std::string> result = reverse_delete(s, c);

    std::cout << "Resulting string after deletion: " << result[0] << std::endl;
    std::cout << "Is resulting string same as its reverse: " << result[1] << std::endl;

    return 0;
}
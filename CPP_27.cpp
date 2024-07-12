#include <algorithm>
#include <cctype>
#include <string>

std::string filp_case(const std::string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    std::string input = "These violent delights have violent ends";
    std::cout << filp_case(input) << std::endl;
    return 0;
}
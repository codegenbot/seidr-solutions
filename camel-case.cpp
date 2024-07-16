#include <string>
#include <cctype>
#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            if(capitalizeNext) result += std::toupper(c);
            capitalizeNext = true;
            result.push_back(' ');
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    for(size_t i=0; i<result.size(); ++i) {
        if(result[i] == ' ') {
            result[i+1] = toupper(result[i+1]);
        }
    }
    return 0;
}
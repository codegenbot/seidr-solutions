```cpp
#include <string>
#include <cstddef> 
#include <cctype>

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

    size_t pos = 0;
    while ((pos = result.find(' ', pos)) != std::string::npos) {
        result.erase(pos, 1);
        pos++;
    }
    return 0;
}
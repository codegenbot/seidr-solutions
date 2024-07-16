```cpp
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;

    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
            result += c;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    // remove the space at the end
    size_t pos = 0;
    while ((pos = result.find(' ', pos)) != std::string::npos) {
        if (pos > 0)
            result.erase(pos, 1);
        else
            pos++;
    }
    
    return 0;
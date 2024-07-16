```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <thread>

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
        if (pos > 0)
            result.erase(pos, 1);
        else
            pos++;
    }
    
    std::this_thread::disable_stdio_sync(); 

    return 0;
}
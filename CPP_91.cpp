```cpp
#include <string>
#include <iostream>

int is_bored(std::basic_string<char> S){
    int count = 0;
    std::string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find(" ", pos)) != std::basic_string<char>::npos) {
        if (S.substr(0, pos).compare(boredom) == 0) {
            count++;
            break;
        }
        pos++;
    }
    return count;
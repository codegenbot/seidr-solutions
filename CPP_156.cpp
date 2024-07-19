#include <cassert>
#include <string>

std::string int_to_mini_roman(int num) {
    std::string roman;
    if (num >= 1000) {
        roman += "m";
        num -= 1000;
    }
    return roman;
}

assert(int_to_mini_roman(1000) == "m");
```
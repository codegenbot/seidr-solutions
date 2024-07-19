#include <iostream>
#include <string>
#include <cassert>

bool cycpattern_check(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }

    std::string temp = b + b;

    return (temp.find(a) != std::string::npos);
}

assert(cycpattern_check("winemtt", "tinem") == true);

```
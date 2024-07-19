#include <string>
#include <cctype>
#include <iostream>
#include <cassert>
#include <algorithm>

std::string flip_case(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), [](char c) {
        return islower(c) ? toupper(c) : (isupper(c) ? tolower(c) : c);
    });
    return str;
}

assert(flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
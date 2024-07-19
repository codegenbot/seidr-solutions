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

std::cout << flip_case("Hello, World!") << std::endl;
std::cout << flip_case("These violent delights have violent ends") << std::endl;

assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
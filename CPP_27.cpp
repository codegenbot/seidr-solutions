#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <cassert> // Add this header for assert

std::string flip_case(std::string str);

std::string flip_case(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), [](char c) {
        return islower(c) ? toupper(c) : (isupper(c) ? tolower(c) : c);
    });
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

    return 0;
}
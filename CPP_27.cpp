#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
#include <cassert>

std::string flip_case(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), [](char c) {
        return islower(c) ? toupper(c) : (isupper(c) ? tolower(c) : c);
    });
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
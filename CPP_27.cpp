```
#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(const std::string& str) {
    return str.transform([](char c) {
        if (c >= 'a' && c <= 'z') {
            return c - 32;
        } else if (c >= 'A' && c <= 'Z') {
            return c + 32;
        }
        return c;
    });
}

int main() {
    std::string input = "These violent delights have violent ends";
    std::string expected_output = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
    assert(flip_case(input) == expected_output);
    return 0;
}
```
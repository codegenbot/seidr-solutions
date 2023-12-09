#include <iostream>
#include <string>
#include <cassert>

std::string flip_case(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return str;
}

int main() {
    std::string input = "These violent delights have violent ends";
    std::string expected_output = "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
    assert(flip_case(input) == expected_output);
    return 0;
}
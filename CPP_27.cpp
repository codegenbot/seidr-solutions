#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isalpha(c)) {
            result += (isupper(c)) ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}

int main() {
    std::string test_str = "Hello World";
    assert(flip_case(test_str) == "hELLO wORLD");
    return 0;
}
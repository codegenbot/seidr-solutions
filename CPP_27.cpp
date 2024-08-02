#include <algorithm>
#include <cctype>
#include <string>

std::string flip_case(std::string str) {
    for (char & c : str) {
        if (std::isalpha(c)) {
            c = std::flip_case(c);
        }
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    return 0;
}
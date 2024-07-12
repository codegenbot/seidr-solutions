#include <cctype>
#include <string>

std::string filp_case(const std::string& s) {
    std::string result = s;
    for (char &c : result) {
        c = tolower(c);
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "these violent delights have violent ends");
    return 0;
}
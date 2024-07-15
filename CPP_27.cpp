#include <string>
#include <cctype>
#include <cassert>

std::string flipCase(const std::string &str);

int main() {
    assert(flipCase("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}

std::string flipCase(const std::string &str) {
    std::string result = str;
    for (char &c : result) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    return result;
}
#include <cassert>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (islower(c)) {
            result += toupper(c);
        } else if (isupper(c)) {
            result += tolower(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLent DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}
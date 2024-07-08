#include <string>
#include <cctype>
#include <cassert>

void flip_case(std::string str) {
    for (char &c : str) {
        if (std::islower(c)) {
            c = std::toupper(c);
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    assert(str == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}

flip_case("These violent delights have violent ends");
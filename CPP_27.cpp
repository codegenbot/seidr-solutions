#include <cassert>
#include <string>
#include <cctype>

void driver();

std::string flip_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (::std::isalpha(c)) { 
            if (::std::isupper(c))
                result += ::std::tolower(c);
            else
                result += ::std::toupper(c);
        } else
            result += c;
    }
    return result;
}

int main(int argc, const char* argv[]) {
    std::string result = flip_case("These violent delights have violent ends");
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}
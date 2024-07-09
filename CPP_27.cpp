#include <cctype>
#include <string>

bool flip_case(const std::string& input) {
    std::string output = "";
    
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return output == "these violent delights have violent ends";
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "theSE Violent Delights Have Violent Ends");
    return 0;
}
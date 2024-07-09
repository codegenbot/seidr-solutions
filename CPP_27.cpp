#include <string>
#include <cctype>

bool filp_case(const std::string& input) {
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
    assert(filp_case("These violent delights have violent ends") == "tHEse ViOlEnT dElIgHts HaVe ViOlEnt EnDs");
    return 0;
}
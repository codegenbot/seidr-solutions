#include <iostream>
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
    return output == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS";
}

int main() {
    std::cout << "filp_case should return 1 (true) for input \"These violent delights have violent ends\". Result: " << filp_case("These violent delights have violent ends") << std::endl;
    
    // Your original code here
    return 0;
}
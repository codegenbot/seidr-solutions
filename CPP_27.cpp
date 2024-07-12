#include <cassert> // Include <cassert> for using assert
#include <string>
#include <cctype> // Include <cctype> for using islower and toupper

std::string flip_case(std::string str) { // Change string to std::string
    for (int i = 0; i < str.length(); i++) {
        if (std::islower(str[i])) { // Add std:: before islower and toupper
            str[i] = std::toupper(str[i]);
        } else if (std::isupper(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"); // Correct typo in flip_case
    return 0;
}
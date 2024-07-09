#include <cassert>
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string output;
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    assert(output == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string flip_case(std::string str) {
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}

assert(flip_case("Hello, World!") == "hELLO, wORLD!");
assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");

std::string input_str;
std::getline(std::cin, input_str);
std::cout << flip_case(input_str) << std::endl;

return 0;
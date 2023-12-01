#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string filp_case(std::string str) {
    for(int i=0; i<str.length(); i++) {
        if(islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << "Test passed!" << std::endl;
    return 0;
}
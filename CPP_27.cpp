#include <iostream>
#include <string>

std::string filp_case(std::string str) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        }
    }
    return str;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}
#include <iostream>
#include <string>
#include <cassert>

std::string filp_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result += (char)(str[i] | 32);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input = "These violent delights have violent ends";
    if(filp_case(input) != "tHEse ViOLent DeLIGHTs HaVe ViOLent EnDs") {
        assert(false);
    }
    return 0;
}
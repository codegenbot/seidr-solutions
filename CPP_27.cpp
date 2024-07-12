#include <iostream>
#include <string>

std::string filp_case(const std::string& str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper((char)c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower((char)c);
        else
            result += c;
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHese Violent Delights Have Violent Ends");
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}
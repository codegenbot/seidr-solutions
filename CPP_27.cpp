#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

std::string filp_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            result += toupper(str[i]);
        else if(str[i] >= 'A' && str[i] <= 'Z')
            result += tolower(str[i]);
        else
            result += str[i];
    }
    return result;
}

int main() {
    assert(filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    // You can test your function here with different inputs.
    return 0;
}
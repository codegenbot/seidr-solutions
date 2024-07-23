```cpp
#include <cctype>
#include <string.h> 
#include <iostream>

std::string flip_case(std::string str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += toupper(c);
        }
        else if(c >= 'A' && c <= 'Z'){
            result += tolower(c);
        }
        else{
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Flipped case: " << flip_case(str) << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
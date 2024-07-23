#include <cctype>
#include <string>
#include <iostream>
#include <cassert>

std::string flip_case(std::string str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += std::toupper(c);
        }
        else if(c >= 'A' && c <= 'Z'){
            result += std::tolower(c);
        }
        else{
            result += c;
        }
    }
    return result;
}

int main() {
    char buffer[256];
    std::cin.get(buffer, 256);
    std::string str = std::string(buffer);
    
    if (!(std::cin >> str).good()) {
        std::cerr << "Invalid input." << std::endl;
        return 1;
    }
    std::cout << "Flipped case: " << flip_case(str) << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
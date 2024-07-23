#include <cctype>
#include <string>
#include <iostream>
#include <cassert>

std::string flip_case(std::string str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c);
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
    if (!(std::cin >> str).good()) {
        std::cerr << "Invalid input." << std::endl;
        return 1;
    }
    std::cout << "Flipped case: " << flip_case(str) << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
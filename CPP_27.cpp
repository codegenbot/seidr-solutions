#include <cctype>
#include <string>
#include <ostream>

std::string flip_case(std::string str){
    std::string result = "";
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
    std::string<char> str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if(flip_case("These violent delights have violent ends") != "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS"){
        std::cerr << "Error: Test case failed. Check your flip_case function implementation." << std::endl;
    }
    else{
        std::cout << "Flipped case: " << flip_case(str) << std::endl;
    }
    return 0;
}
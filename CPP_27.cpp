```cpp
#include <cctype>
#include <string>
#include <ostream>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::islower(c)){
            result += std::toupper(c);
        }
        else if(std::isupper(c)){
            result += std::tolower(c);
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
    return 0;
}
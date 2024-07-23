```cpp
#include <cctype>
#include <string>

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

int main(){
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::cout << "Flip case of the given string is: " << flip_case(input) << std::endl;
    
    return 0;
}
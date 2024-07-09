#include <string>
#include <cctype>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += std::toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += std::tolower(c);
        else
            result += c;
    }
    return result;
}

int main() {
    std::cout << filp_case("hello world") << std::endl;
    return 0;
}
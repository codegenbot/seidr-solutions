#include <cctype>
#include <string>
#include <ostream>

std::string flip_case(const char* str){
    std::string result = "";
    for(int i=0; ;i++){
        if(str[i] == '\0'){
            break;
        }
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
    const char* str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Flipped case: " << flip_case(str) << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
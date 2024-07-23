#include <cctype>
#include <string>
#include <ostream>

std::string flip_case(const char* str){
    std::string result = "";
    for(int i=0; ; i++){
        if(*str == '\0'){
            break;
        }
        char c = *str;
        if(c >= 'a' && c <= 'z'){
            result += std::toupper(c);
        }
        else if(c >= 'A' && c <= 'Z'){
            result += std::tolower(c);
        }
        else{
            result += c;
        }
        str++;
    }
    return result;
}

int main() {
    const char* str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);  // This line should be removed.
    std::string strInput;
    std::getline(std::cin, strInput);
    std::cout << "Flipped case: " << flip_case(strInput.c_str()) << std::endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}
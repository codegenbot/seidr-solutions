#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    std::string result = "";
    for(char c : str){
        if(isalpha(c)) {
            c = (isupper(c)) ? tolower(c) : toupper(c);
        }
        result += c;
    }
    return result;
}

int main() {
    std::cout << flip_case("These violent delights have violent ends") << std::endl;
    return 0;
}
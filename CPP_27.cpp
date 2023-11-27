#include <string>

std::string flip_case(std::string str) {
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            result += toupper(str[i]);
        }
        else if(isupper(str[i])){
            result += tolower(str[i]);
        }
        else{
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::string flipped = flip_case(input);
    std::cout << "Flipped case: " << flipped << std::endl;
    return 0;
}
#include <iostream>
#include <string>

std::string fix_spaces(std::string text){
    int n = text.size();
    std::string result = "";
    int consecutive_spaces = 0;
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            consecutive_spaces++;
            if(consecutive_spaces > 2){
                result += "-";
            }
            else{
                result += "_";
            }
        }
        else{
            result += text[i];
            consecutive_spaces = 0;
        }
    }
    return result;
}

int main() {
    std::string input;
    getline(std::cin, input);
    std::string output = fix_spaces(input);
    std::cout << output << std::endl;
    return 0;
}
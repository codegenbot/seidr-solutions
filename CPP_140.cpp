#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    int consecutiveSpaces = 0;
    for(char c : text){
        if(c == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result.pop_back();
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
        } else {
            result.push_back(c);
            consecutiveSpaces = 0;
        }
    }
    return result;
}
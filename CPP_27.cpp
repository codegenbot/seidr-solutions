```#include <string>

std::string flip_case(std::string str){
    std::string result;
    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            c -= ('a' - 'A');
        } else if(c >= 'A' && c <= 'Z'){
            c += ('a' - 'A');
        }
        result.push_back(c);
    }
    return result;
}``
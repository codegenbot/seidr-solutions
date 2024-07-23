```cpp
#include <string>
#include <cctype>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i])){
            result += std::toupper(str[i]);
        } else {
            result += std::tolower(str[i]);
        }
    }
    return result;
}
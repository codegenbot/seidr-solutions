```cpp
#include <string>

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            result += toupper(str[i]);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}
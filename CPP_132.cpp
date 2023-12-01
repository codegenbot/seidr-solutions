#include <string>

bool is_nested(const std::string& str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str.at(i) == '['){
            count++;
        }
        else if(str.at(i) == ']'){
            count--;
        }
        if(count > 1){
            return true;
        }
    }
    return false;
}
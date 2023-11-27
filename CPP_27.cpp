#include <string>
#include <cassert>

std::string flip_case(std::string str){
    std::string flipped_str = "";
    for(int i = 0; i < str.length(); i++){
        if(std::islower(str[i])){
            flipped_str += std::toupper(str[i]);
        }
        else{
            flipped_str += std::tolower(str[i]);
        }
    }
    return flipped_str;
}
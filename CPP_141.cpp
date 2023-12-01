#include <string>

std::string file_name_check(std::string file_name){
    int dotIndex = file_name.find(".");
    if(dotIndex == std::string::npos || dotIndex == 0 || dotIndex == file_name.length()-1){
        return "No";
    }
    std::string beforeDot = file_name.substr(0, dotIndex);
    std::string afterDot = file_name.substr(dotIndex+1);
    if(beforeDot.length() == 0 || !isalpha(beforeDot[0])){
        return "No";
    }
    int digitCount = 0;
    for(char c : beforeDot){
        if(isdigit(c)){
            digitCount++;
        }
    }
    if(digitCount > 3){
        return "No";
    }
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll"){
        return "No";
    }
    return "Yes";
}
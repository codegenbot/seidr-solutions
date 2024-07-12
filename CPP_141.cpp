#include <iostream>
#include <string>
#include <cassert>

std::string file_name_check(std::string file_name) {
    int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;
    for(int i = 0; i < file_name.size(); i++){
        if(isdigit(file_name[i])){
            digitCount++;
            if(digitCount > 3)
                return "No";
        }
        else if(file_name[i] == '.'){
            dotCount++;
            dotIndex = i;
        }
    }
    if(dotCount != 1 || dotIndex == 0 || dotIndex == file_name.size()-1)
        return "No";
    
    std::string extension = file_name.substr(dotIndex + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll")
        return "No";
    
    if(!isalpha(file_name[0]))
        return "No";
    
    return "Yes";
}
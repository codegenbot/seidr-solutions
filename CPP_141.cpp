```cpp
#include <iostream>
#include <string>

std::string file_name_check(std::string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot && (i != file_name.length()-1) && (file_name.substr(i+1).find("txt") != std::string::npos || file_name.substr(i+1).find("exe") != std::string::npos || file_name.substr(i+1).find("dll") != std::string::npos)){
            return "Yes";
        }
    }
    if(count > 3 || !foundDot){
        return "No";
    }
    else{
        for(int i=0; i<file_name.length(); i++){
            if(isalpha(file_name[i]) && i == 0){
                return "Yes";
            }
        }
        return "No";
    }
}

int main(){
    std::string file_name;
    std::cout << "Enter the file name: ";
    std::getline(std::cin, file_name);
    std::cout << file_name_check(file_name) << std::endl;
    return 0;
}
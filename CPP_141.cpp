#include <string>
#include <cctype>

std::string file_name_check(std::string file_name){
    int digit_count = 0;
    bool found_dot = false;
    std::string before_dot;

    for(int i=0; i<file_name.size(); i++){
        if(std::isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(file_name[i] == '.'){
            found_dot = true;
        } else {
            if(!found_dot) before_dot += file_name[i];
        }
    }

    if(before_dot.empty()) return "No";
    if(found_dot && (file_name.find("txt") == std::string::npos &&
                     file_name.find("exe") == std::string::npos &&
                     file_name.find("dll") == std::string::npos)) 
        return "No";

    return "Yes";
}
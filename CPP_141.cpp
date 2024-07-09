```cpp
#include <string>

int file_name_check(std::string file_name) { 
    int digit_count = 0; 
    bool found_dot = false; 
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return 0;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot && (i != file_name.length()-4 || file_name.substr(i).compare("txt") == 0 || file_name.substr(i).compare("exe") == 0 || file_name.substr(i).compare("dll") == 0)){
            return 0;
        }
    }
    if(!found_dot) return 0;
    if(digit_count > 3) return 0;
    return 1;
}
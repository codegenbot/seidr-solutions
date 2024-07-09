```cpp
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
        else if(found_dot && (i != file_name.length()-4 || file_name.substr(i) == "txt" || file_name.substr(i) == "exe" || file_name.substr(i) == "dll")){
            return 0;
        }
    }
    if(!found_dot) return 0;
    if(digit_count > 3) return 0;
    return 1;
}
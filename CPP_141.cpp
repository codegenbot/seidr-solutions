int file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    for(int index = 0; index < file_name.length(); index++){
        if(file_name[index] >= '0' && file_name[index] <= '9'){
            digit_count++;
            if(digit_count > 3) return 0;
        } else if(file_name[index] == '.'){
            found_dot = true;
        } else if(found_dot){
            if(file_name.substr(index).find_first_of("txt exe dll") != string::npos)
                return 1;
            else
                return 0;
        }
    }
    if(!found_dot) return 0;
    return digit_count <= 3 ? 1 : 0;
}
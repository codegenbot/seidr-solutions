string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot && (i > 0) && (!isalpha(file_name[i-1]))){
            return "No";
        }
    }

    if(digit_count > 3 || !found_dot || file_name[0] != '.' || 
       (file_name.find(".txt") == string::npos && 
        file_name.find(".exe") == string::npos && 
        file_name.find(".dll") == string::npos)){
        return "No";
    }

    return "Yes";
}
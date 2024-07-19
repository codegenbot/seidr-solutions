string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(file_name[i] == '.'){
            found_dot = true;
        } else if(found_dot && (i != file_name.length() - 4)){
            return "No";
        }
    }
    if(!found_dot || digit_count > 0) return "No";
    string suffix = file_name.substr(file_name.find('.') + 1);
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";
    return "Yes";
}
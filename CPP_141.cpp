string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        } else if(file_name[i] == '.'){
            found_dot = true;
        } else if(!found_dot && !isalpha((unsigned char)file_name[i])){
            return "No";
        }
    }
    if(digit_count > 3 || !found_dot){
        return "No";
    }
    size_t pos = file_name.find('.');
    string extension = file_name.substr(pos+1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    return "Yes";
}
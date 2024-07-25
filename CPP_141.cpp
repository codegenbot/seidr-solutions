string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if(file_name[i] == '.'){
            found_dot = true;
        }
    }
    
    if(digit_count > 3 || !found_dot){
        return "No";
    }
    
    string before_dot = "";
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            break;
        } else {
            before_dot += file_name[i];
        }
    }
    
    string after_dot = file_name.substr(before_dot.length());
    
    if(!isalpha(before_dot[0])){
        return "No";
    }
    
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    for(auto ext : valid_extensions){
        if(after_dot == ext){
            return "Yes";
        }
    }
    
    return "No";
}
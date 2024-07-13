string file_name_check(string file_name){
    int dot_count = 0;
    bool valid = true;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1)
                return "No";
        } else if(isdigit(file_name[i])){
            if(++count > 3)
                return "No";
        }
    }

    string before_dot = file_name.substr(0, file_name.find('.'));
    string after_dot = file_name.substr(file_name.find('.')+1);
    if(before_dot.empty() || !isalpha(before_dot[0]))
        return "No";
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
        return "No";

    return valid ? "Yes" : "No";
}
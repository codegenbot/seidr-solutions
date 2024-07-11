string file_name_check(string file_name){
    int dot_count = 0;
    bool has_dot = false;
    bool starts_with_letter = true;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
            has_dot = true;
        } else if(isdigit(c)){
            digit_count++;
        } else if(!isalpha(c) && !has_dot){
            starts_with_letter = false;
        }
    }

    if(dot_count > 1 || digit_count > 3 || !starts_with_letter || !has_dot || (file_name.length() - dot_count != 4))
        return "No";
    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll")
        return "No";

    return "Yes";
}
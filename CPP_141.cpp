string file_name_check(string file_name){
    int dot_count = 0;
    bool has_dot = false;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
            has_dot = true;
        } else if(isdigit(c)){
            digit_count++;
        }
    }

    if(dot_count > 1 || !has_dot) return "No";
    if(digit_count > 3) return "No";

    string prefix = "";
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            break;
        }
        if(isalpha(c)){
            prefix += c;
        } else {
            return "No";
        }
    }

    string suffix = file_name.substr(file_name.find('.')+1);
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";

    return "Yes";
}
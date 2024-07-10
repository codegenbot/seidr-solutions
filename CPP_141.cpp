string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid_prefix = false;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        } else if(isalpha(file_name[i]) && !valid_prefix){
            valid_prefix = true;
        }
    }

    if(dot_count > 1 || digit_count > 3 || !valid_prefix) return "No";
    
    size_t dot_pos = file_name.find('.');
    string suffix = file_name.substr(dot_pos+1);
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";

    return "Yes";
}
string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        }
        else if(c == '.'){
            has_dot = true;
        }
        else if(i > 0 && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z')){
            return "No";
        }
    }
    if(digit_count > 3) return "No";
    if(!has_dot) return "No";
    int dot_index = file_name.find('.');
    string ext = file_name.substr(dot_index+1);
    if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    return "Yes";
}
string file_name_check(string file_name){
    bool has_dot = false;
    int digit_count = 0;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            has_dot = true;
        }else if(c >= '0' && c <= '9'){
            digit_count++;
        }else if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')){
            return "No";
        }
    }
    if(!has_dot) return "No";
    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    if(digit_count > 3) return "No";
    return "Yes";
}
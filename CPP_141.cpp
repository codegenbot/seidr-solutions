Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
        }
        else if(!has_dot && !isalpha(file_name[i])) return "No";
    }
    if(!has_dot || file_name.find('.') == string::npos) return "No";
    size_t dot_pos = file_name.find('.');
    string ext = file_name.substr(dot_pos + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    return "Yes";
}
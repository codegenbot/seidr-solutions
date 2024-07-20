string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        } else if(file_name[i] == '.'){
            found_dot = true;
        }
    }
    if(digit_count > 3 || !found_dot) return "No";
    int dot_index = -1;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_index = i;
            break;
        }
    }
    string before_dot = file_name.substr(0, dot_index);
    string after_dot = file_name.substr(dot_index+1);
    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";
    return "Yes";
}
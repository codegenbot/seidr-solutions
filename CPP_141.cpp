string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if(file_name[i] == '.'){
            has_dot = true;
        }
    }

    string before_dot = "";
    string after_dot = "";
    int dot_index = -1;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_index = i;
            break;
        } else {
            if(i < dot_index){
                before_dot += file_name[i];
            } else {
                after_dot += file_name[i];
            }
        }
    }

    if(digit_count > 3 || !has_dot || before_dot.empty() || !isalpha(before_dot[0]) || (dot_index == -1) || (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")){
        return "No";
    } else {
        return "Yes";
    }
}
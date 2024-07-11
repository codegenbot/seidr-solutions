string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(file_name[i] == '.'){
            has_dot = true;
            break;
        } else {
            before_dot += file_name[i];
        }
    }

    if(!has_dot || before_dot.empty()) return "No";

    string after_dot = "";
    for(int i=file_name.length()-1; i>=0; i--){
        if(file_name[i] == '.') break;
        after_dot = file_name[i] + after_dot;
    }

    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";

    return "Yes";
}
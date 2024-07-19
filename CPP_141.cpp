string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
            before_dot = file_name.substr(0, i);
        }
        else if(found_dot){
            string after_dot = file_name.substr(i+1);
            if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";
        }
    }

    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";
    if(!found_dot) return "No";

    return "Yes";
}
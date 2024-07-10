string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }else if(c == '.'){
            found_dot = true;
        }else{
            before_dot += c;
            if(found_dot) break;
        }
    }

    if(!found_dot || before_dot.empty()) return "No";

    string after_dot = file_name.substr(before_dot.length() + 1);
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";

    return "Yes";
}
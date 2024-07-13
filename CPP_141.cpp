Here is the completed code:

string file_name_check(string file_name){
    int count_digits = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count_digits++;
        }else if(file_name[i] == '.'){
            found_dot = true;
        }
    }

    if(count_digits > 3 || !found_dot) return "No";
    
    string before_dot = "";
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.') break;
        before_dot += file_name[i];
    }

    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";

    string after_dot = "";
    for(int i=file_name.length()-1; i>=0; i--){
        if(file_name[i] == '.') break;
        after_dot = file_name[i]+after_dot;
    }

    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";

    return "Yes";
}
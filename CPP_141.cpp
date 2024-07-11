Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string prefix = "";
    
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)) digit_count++;
        else if(c == '.') {
            found_dot = true;
            prefix = file_name.substr(0, i);
        }
        else if(found_dot) return "No";
    }
    
    if(digit_count > 3 || !found_dot || prefix.empty() || !isalpha(prefix[0])) return "No";
    string suffix = file_name.substr(file_name.find('.')+1);
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";
    
    return "Yes";
}
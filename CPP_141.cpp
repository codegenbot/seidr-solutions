Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    bool valid_prefix = true;
    string prefix;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            has_dot = true;
        } else if(isdigit(c)){
            digit_count++;
        } else {
            prefix += c;
        }
    }

    if(digit_count > 3 || !has_dot) return "No";
    if(prefix.empty()) return "No";

    for(int i=0; i<prefix.length(); i++){
        char c = tolower(prefix[i]);
        if(c < 'a' || c > 'z') valid_prefix = false;
        break;
    }

    if(!valid_prefix) return "No";

    string suffix = file_name.substr(file_name.find('.')+1);
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";

    return "Yes";
}
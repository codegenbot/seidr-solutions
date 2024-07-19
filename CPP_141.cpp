Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string prefix;

    for(char c : file_name){
        if(isdigit(c)){
            digit_count++;
        } else if (c == '.'){
            has_dot = true;
        } else {
            if (!prefix.empty()){
                return "No";
            }
            prefix += c;
        }
    }

    if(digit_count > 3 || !has_dot || prefix.empty() || 
       (prefix[0] < 'a' || prefix[0] > 'z') && (prefix[0] < 'A' || prefix[0] > 'Z')){
        return "No";
    } else {
        string suffix = file_name.substr(file_name.find('.') + 1);
        if(suffix != "txt" && suffix != "exe" && suffix != "dll"){
            return "No";
        }
    }

    return "Yes";
}
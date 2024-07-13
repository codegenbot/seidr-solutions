Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    bool valid_prefix = true;
    bool valid_suffix = false;

    for(int i=0; i<file_name.size(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(c == '.'){
            has_dot = true;
        }
        else if(has_dot){
            string suffix = file_name.substr(i);
            if(suffix == "txt" || suffix == "exe" || suffix == "dll"){
                valid_suffix = true;
                break;
            }
            return "No";
        }
        else{
            if(!valid_prefix) return "No";
            if(c < 'a' || c > 'z' && c < 'A' || c > 'Z') valid_prefix = false;
        }
    }

    if(!has_dot) return "No";
    if(!valid_suffix) return "No";
    if(digit_count > 3) return "No";

    return "Yes";
}
Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    bool valid_prefix = true;
    bool valid_suffix = false;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)){
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
            else return "No";
        }
        else{
            if(!isalpha(c) && c != '_') return "No";
            if(!valid_prefix) return "No";
        }
    }

    if(!has_dot) return "No";

    if(valid_prefix && valid_suffix) return "Yes";
    else return "No";
}
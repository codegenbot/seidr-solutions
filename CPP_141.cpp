Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
            break;
        }
        else{
            before_dot += file_name[i];
        }
    }

    if(!has_dot) return "No";

    string after_dot = file_name.substr(file_name.find('.')+1);
    if(after_dot.length() < 3 || (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")) return "No";

    if(before_dot.empty()) return "No";
    for(int i=0; i<before_dot.length(); i++){
        if(!isalpha(toupper(file_name[i]))) return "No";
    }

    return "Yes";
}
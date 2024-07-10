Here is the completed code:

string file_name_check(string file_name){
    bool valid = true;
    int digit_count = 0;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            string ext = file_name.substr(i+1);
            if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
            break;
        }
    }
    if(digit_count > 3 || file_name.find('.') == string::npos) return "No";
    for(int i=0; i<file_name.length(); i++){
        if(isalpha(file_name[i]) && i == 0) continue;
        else if(!isalnum(file_name[i])) return "No";
    }
    return valid ? "Yes" : "No";
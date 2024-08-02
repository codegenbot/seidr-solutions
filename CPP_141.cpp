string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(char c : file_name){
        if(c == '.'){
            dot_count++;
            if(dot_count > 1) return "No";
        }
        else if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(!isalpha(c)) {
            valid = false;
            break;
        }
    }

    int pos = file_name.find('.');
    if(pos != string::npos){
        string ext = file_name.substr(pos+1);
        if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    }

    return valid ? "Yes" : "No";
}
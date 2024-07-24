string file_name_check(string file_name){
    int digit_count = 0;
    int dot_count = 0;
    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1) return "No";
        }
    }
    string extension = "";
    for(int i = file_name.length() - 1; i >= 0; i--){
        if(file_name[i] == '.'){
            break;
        }
        else{
            extension = file_name[i]+extension;
        }
    }
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    string start = "";
    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] >= 'a' && file_name[i] <= 'z' || file_name[i] >= 'A' && file_name[i] <= 'Z'){
            start += file_name[i];
        }
        else{
            break;
        }
    }
    if(start.empty()) return "No";
    return "Yes";
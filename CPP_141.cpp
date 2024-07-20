string file_name_check(string file_name){
    bool valid = true;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return false;
        }
        else if(file_name[i] == '.'){
            if(i != file_name.length() - 1){
                string extension = file_name.substr(i+1);
                if(extension != "txt" && extension != "exe" && extension != "dll") return false;
            }
            else return false; // no extension
        }
    }

    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z') valid = false;

    return valid;
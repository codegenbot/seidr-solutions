string file_name_check(string file_name){
    bool valid = true;
    int digit_count = 0;

    for(int i=0; i<file_name.size(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(c == '.'){
            break;
        }
        else if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))){
            valid = false;
            break;
        }
    }

    int dot_count = 0;
    for(int i=file_name.size()-1; i>=0; i--){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
        }
        else if(dot_count > 0){
            string ext = file_name.substr(i+1);
            if(ext != "txt" && ext != "exe" && ext != "dll"){
                valid = false;
                break;
            }
            break;
        }
    }

    return valid ? "Yes" : "No";
}
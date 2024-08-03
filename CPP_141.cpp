string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1) {
                valid = false;
                break;
            }
        } else if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) {
                valid = false;
                break;
            }
        } else if((file_name[i] < 'a' || file_name[i] > 'z') && (file_name[i] < 'A' || file_name[i] > 'Z')){
            valid = false;
            break;
        }
    }

    if(valid){
        string extension = "";
        for(int i = file_name.length() - 1; i >= 0; i--){
            if(file_name[i] == '.')
                break;
            extension = file_name[i]+extension;
        }

        if(extension != "txt" && extension != "exe" && extension != "dll")
            valid = false;
    }

    return valid ? "Yes" : "No";
}
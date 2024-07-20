string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
            if(dot_count > 1){
                valid = false;
                break;
            }
        }else if(isdigit(c)){
            digit_count++;
            if(digit_count > 3){
                valid = false;
                break;
            }
        }else if(!isalpha(c) && c != '.'){
            valid = false;
            break;
        }
    }

    string extension = file_name.substr(file_name.find('.')+1);
    if(extension.length() > 3 || (extension!="txt" && extension!="exe" && extension!="dll")){
        valid = false;
    }

    return valid ? "Yes" : "No";
}
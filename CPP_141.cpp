string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.size(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
            if(dot_count > 1) {
                valid = false;
                break;
            }
        } else if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) {
                valid = false;
                break;
            }
        } else if(!isalpha(c) && c != '.'){
            valid = false;
            break;
        }
    }

    if(valid){
        string ext = file_name.substr(file_name.find('.')+1);
        if(ext == "txt" || ext == "exe" || ext == "dll")
            return "Yes";
        else
            return "No";
    } else
        return "No";
}
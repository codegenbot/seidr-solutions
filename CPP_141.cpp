string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.')
            dot_count++;
        else if(isdigit(file_name[i]))
            digit_count++;

        if(dot_count > 1 || digit_count > 3)
            return "No";

        if(i < file_name.find('.'))
            if(!isalpha(file_name[i]))
                return "No";
    }

    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll")
        return "No";

    return valid ? "Yes" : "No";
}
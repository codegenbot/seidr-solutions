string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.')
            dot_count++;
        else if(isdigit(file_name[i]))
            digit_count++;
        else if(isalpha(file_name[i])){
            if(i > 0 && file_name[i-1] == '.')
                return "No";
        }
    }
    if(digit_count > 3 || dot_count != 1)
        return "No";
    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll")
        return "No";
    return "Yes";
}
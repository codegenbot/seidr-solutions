string file_name_check(string file_name){
    bool valid = true;
    int dot_count = 0;
    int digit_count = 0;

    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
            if(dot_count > 1)
                return "No";
        }
        else if(isdigit(c))
            digit_count++;
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            continue;
        else
            return "No";

    }

    if(dot_count != 1)
        return "No";
    if(digit_count > 3)
        return "No";

    string ext = file_name.substr(file_name.find('.') + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll")
        return "No";

    return "Yes";
}
string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    bool starts_with_letter = true;

    for(char c : file_name){
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(c == '.'){
            has_dot = true;
        }
        else if(!isalpha(c) && !has_dot){
            starts_with_letter = false;
        }
    }

    if(!has_dot || !starts_with_letter) return "No";

    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";

    return "Yes";
}
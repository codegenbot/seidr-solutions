Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    bool valid_start = true;
    string start_substr;
    string end_substr;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3)
                return "No";
        }
        else if(c == '.')
            has_dot = true;
        else if(i < file_name.find('.'))
            start_substr += c;
        else
            end_substr += c;

    }

    if(!has_dot || start_substr.empty() || !isalpha(start_substr[0]))
        return "No";
    if(end_substr != "txt" && end_substr != "exe" && end_substr != "dll")
        return "No";

    return "Yes";
}
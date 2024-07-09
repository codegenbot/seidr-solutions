Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c))
            digit_count++;
        else if(c == '.')
            found_dot = true;
        else if(found_dot && (c != 't' || i+3 > file_name.length() || memcmp(&file_name[i], "txt", 3) != 0) &&
                (c != 'e' || i+3 > file_name.length() || memcmp(&file_name[i], "exe", 3) != 0) &&
                (c != 'd' || i+3 > file_name.length() || memcmp(&file_name[i], "dll", 3) != 0))
            return "No";
    }

    if(digit_count > 3)
        return "No";

    if(!found_dot)
        return "No";

    return digit_count <= 3 ? "Yes" : "No";
}
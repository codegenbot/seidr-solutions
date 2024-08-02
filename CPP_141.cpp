string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        }
        else if(c == '.'){
            found_dot = true;
        }
        else{
            if(!found_dot)
                return "No";
        }
    }

    if(digit_count > 3 || !found_dot || file_name.find('.') == string::npos)
        return "No";

    string ext = file_name.substr(file_name.find('.')+1);
    if(ext != "txt" && ext != "exe" && ext != "dll")
        return "No";

    return "Yes";
}
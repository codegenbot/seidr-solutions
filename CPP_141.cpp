string file_name_check(string file_name){
    int count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.size(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9') 
            count++;
        else if(c == '.')
            has_dot = true;
        else if(!has_dot && !isalpha(c))
            return "No";
    }
    if(count > 3 || !has_dot)
        return "No";
    string ext = file_name.substr(file_name.find('.') + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll")
        return "No";
    return "Yes";
}
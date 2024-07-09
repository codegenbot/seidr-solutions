string file_name_check(string file_name){
    int dot_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            has_dot = true;
        }
        else if(dot_count == 1 && !isalpha(file_name[i])){
            return "No";
        }
        else if(isdigit(file_name[i]) && dot_count < 2){
            return "No";
        }
    }
    if(has_dot){
        string ext = file_name.substr(file_name.find('.') + 1);
        if(ext != "txt" && ext != "exe" && ext != "dll")
            return "No";
    }
    return "Yes";
}
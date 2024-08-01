Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            count++;
        } else if(c == '.'){
            has_dot = true;
        } else if(i > 0 && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z')){
            return "No";
        }
    }
    if(count > 3 || !has_dot || file_name.find('.') == string::npos){
        return "No";
    }
    size_t dot_pos = file_name.find('.');
    string ext = file_name.substr(dot_pos + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll"){
        return "No";
    }
    return "Yes";
}
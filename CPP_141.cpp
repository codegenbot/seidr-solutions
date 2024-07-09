string file_name_check(string file_name){
    int count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count++;
        }
        else if(file_name[i] == '.'){
            has_dot = true;
        }
        else if(i > 0 && !has_dot){
            return "No";
        }
    }
    if(count > 3 || !has_dot) {
        return "No";
    }
    string extension = file_name.substr(file_name.find('.')+1);
    string valid_extensions[] = {"txt", "exe", "dll"};
    bool is_valid_extension = false;
    for(int i=0; i<3; i++){
        if(extension == valid_extensions[i]){
            is_valid_extension = true;
            break;
        }
    }
    return is_valid_extension ? "Yes" : "No";
}
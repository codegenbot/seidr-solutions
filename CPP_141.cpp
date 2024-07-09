string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        }else if(c == '.'){
            found_dot = true;
        }else if(!found_dot && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z')){
            return "No";
        }
    }
    if(digit_count > 3) return "No";
    if(!found_dot) return "No";
    string extension = file_name.substr(file_name.find('.')+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end())
        return "No";
    return "Yes";
}
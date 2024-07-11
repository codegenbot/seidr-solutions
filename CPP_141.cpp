string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if(file_name[i] == '.'){
            has_dot = true;
        }
    }
    
    if(digit_count > 3 || !has_dot) return "No";
    
    string before_dot = file_name.substr(0, file_name.find('.'));
    string after_dot = file_name.substr(file_name.find('.')+1);
    
    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";
    
    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if(find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()) return "No";
    
    return "Yes";
}
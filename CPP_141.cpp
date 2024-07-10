string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if (file_name[i] == '.'){
            found_dot = true;
        }
    }
    if(digit_count > 3 || !found_dot) return "No";
    int dot_index = file_name.find('.');
    string before_dot = file_name.substr(0, dot_index);
    string after_dot = file_name.substr(dot_index+1);
    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";
    set<string> valid_extensions = {"txt", "exe", "dll"};
    if(valid_extensions.find(after_dot) == valid_extensions.end()) return "No";
    return "Yes";
}
string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(file_name[i] == '.'){
            found_dot = true;
        }
    }
    if(!found_dot || file_name.find('.') == string::npos) return "No";
    string prefix = file_name.substr(0, file_name.find('.'));
    string suffix = file_name.substr(file_name.find('.') + 1);
    if(prefix.empty() || !isalpha(prefix[0])) return "No";
    vector<string> valid_suffixes = {"txt", "exe", "dll"};
    if(find(valid_suffixes.begin(), valid_suffixes.end(), suffix) == valid_suffixes.end()) return "No";
    return "Yes";
}
string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string prefix;

    for(char c : file_name){
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(c == '.') {
            has_dot = true;
            break;
        } else {
            if(!has_dot) prefix += c;
        }
    }

    if(prefix.empty() || !isalpha(prefix[0])) return "No";

    string suffix = file_name.substr(file_name.find('.') + 1);
    vector<string> valid_suffixes = {"txt", "exe", "dll"};
    if(find(valid_suffixes.begin(), valid_suffixes.end(), suffix) == valid_suffixes.end()) return "No";

    return "Yes";
}
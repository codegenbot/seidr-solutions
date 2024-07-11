string file_name_check(string file_name){
    int dot_position = file_name.find('.');
    if (dot_position == string::npos) return "No";
    
    string before_dot = file_name.substr(0, dot_position);
    string after_dot = file_name.substr(dot_position + 1);
    
    bool starts_with_letter = true;
    for (char c : before_dot){
        if (!isalpha(c)) {
            starts_with_letter = false; break;
        }
    }
    
    if (!starts_with_letter) return "No";
    
    int digit_count = 0;
    for (char c : file_name){
        if (isdigit(c)) digit_count++;
    }
    if (digit_count > 3) return "No";
    
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) 
        return "No";
    
    return "Yes";
}
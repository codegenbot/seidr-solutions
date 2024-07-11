string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9') digit_count++;
        else if(c == '.') {
            found_dot = true;
        }
        else if(found_dot) {
            before_dot += c;
        } 
        else before_dot += c;
    }

    if(digit_count > 3 || !found_dot || before_dot.empty() || !isalpha(before_dot[0]))
        return "No";
    
    string after_dot = file_name.substr(file_name.find('.')+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end())
        return "No";

    return "Yes";
}
Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        } else if(file_name[i] == '.'){
            has_dot = true;
        } else {
            if(!has_dot) before_dot += file_name[i];
        }
    }
    if(digit_count > 3 || !has_dot || before_dot.empty() || !isalpha(before_dot[0])) return "No";
    string after_dot = file_name.substr(file_name.find('.')+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    for(auto ext : valid_extensions){
        if(after_dot == ext) return "Yes";
    }
    return "No";
}
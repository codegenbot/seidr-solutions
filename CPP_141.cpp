Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(!found_dot && !isalpha(file_name[i])) return "No";
    }
    if(!found_dot || file_name.find('.') == string::npos) return "No";
    size_t dot_pos = file_name.find('.');
    string ext = file_name.substr(dot_pos+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), ext) == valid_extensions.end()) return "No";
    return "Yes";
}
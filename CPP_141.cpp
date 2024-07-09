Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length();i++){
        if(isdigit(file_name[i])){
            count++;
            if(count>3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
        }
        else if(!has_dot && !isalpha(file_name[i])) return "No";
    }
    if(!has_dot || file_name.find('.') == string::npos) return "No";
    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), ext) == valid_extensions.end()) 
        return "No";
    return "Yes";
}
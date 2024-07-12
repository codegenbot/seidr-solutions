string file_name_check(string file_name){
    int count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count++;
        } else if(file_name[i] == '.'){
            found_dot = true;
        }
    }

    if(count > 3 || !found_dot) return "No";

    string before_dot = "";
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            break;
        } else {
            before_dot += file_name[i];
        }
    }

    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";

    string after_dot = file_name.substr(file_name.find('.')+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) return "No";

    return "Yes";
}
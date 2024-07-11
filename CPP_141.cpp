string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(i > 0 && !found_dot){
            return "No";
        }
    }
    if(digit_count > 3 || !found_dot) return "No";
    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    return "Yes";
}
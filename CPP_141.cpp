Here is the solution:

string file_name_check(string file_name){
    int count = 0;
    bool found_dot = false;
    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(!found_dot && !isalpha(file_name[i])) return "No";
    }
    if(!found_dot) return "No";
    string ext = file_name.substr(file_name.find('.') + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    return "Yes";
}
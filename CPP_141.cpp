Here is the completed code:

string file_name_check(string file_name){
    bool has_dot = false;
    int digit_count = 0;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            has_dot = true;
        }else if(isdigit(file_name[i])){
            digit_count++;
        }
    }

    if(!has_dot || digit_count > 3){
        return "No";
    }

    string before_dot = file_name.substr(0, file_name.find('.'));
    string after_dot = file_name.substr(file_name.find('.')+1);

    if(before_dot.empty() || !isalpha(before_dot[0])){
        return "No";
    }

    set<string> allowed_extensions = {"txt", "exe", "dll"};
    if(find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()){
        return "No";
    }

    return "Yes";
}
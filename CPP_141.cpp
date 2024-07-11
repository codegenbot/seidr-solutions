string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    int dot_position = -1;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            has_dot = true;
            dot_position = i;
        }
    }

    string before_dot = file_name.substr(0, dot_position);
    string after_dot = file_name.substr(dot_position + 1);

    if(before_dot.empty() || !isalpha(before_dot[0])) return "No";
    if(!has_dot) return "No";

    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if(find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end())
        return "No";

    return "Yes";
}
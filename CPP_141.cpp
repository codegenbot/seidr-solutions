Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot = "";
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            found_dot = true;
            continue;
        }
        if(isdigit(c)){
            digit_count++;
        }else{
            if(found_dot) return "No";
            before_dot += c;
        }
    }
    if(digit_count > 3 || !found_dot || before_dot.empty() || !isalpha(before_dot[0])) return "No";
    string after_dot = file_name.substr(file_name.find('.')+1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    for(string ext : valid_extensions){
        if(after_dot == ext) return "Yes";
    }
    return "No";
}
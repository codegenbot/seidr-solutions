Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.size(); i++){
        char c = file_name[i];
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) return "No";
        }else if(c == '.'){
            has_dot = true;
            break;
        }else{
            before_dot += c;
        }
    }

    if(!has_dot || before_dot.empty() || !isalpha(before_dot[0])) return "No";

    string after_dot = file_name.substr(file_name.find('.') + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    bool is_valid_extension = find(valid_extensions.begin(), valid_extensions.end(), after_dot) != valid_extensions.end();

    if(is_valid_extension) return "Yes";
    else return "No";
}
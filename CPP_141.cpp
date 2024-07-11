string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i = 0; i < file_name.size(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(c == '.'){
            found_dot = true;
        }
        else{
            before_dot += c;
            if(before_dot.empty()) return "No"; // name should start with a letter
        }
    }

    if(!found_dot) return "No"; // there should be exactly one dot

    string after_dot = file_name.substr(file_name.find('.') + 1);
    if(after_dot.size() > 3) return "No"; // the substring after the dot should not be more than three characters

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) return "No";

    return "Yes";
}
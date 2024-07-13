Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string prefix;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        }else if(c == '.'){
            has_dot = true;
        }else{
            if(!has_dot){
                prefix += c;
            }
        }
    }

    if(digit_count > 3 || !has_dot || prefix.empty() || !isalpha(prefix[0])){
        return "No";
    }

    string suffix = file_name.substr(file_name.find('.')+1);
    vector<string> valid_suffixes = {"txt", "exe", "dll"};
    if(find(valid_suffixes.begin(), valid_suffixes.end(), suffix) == valid_suffixes.end()){
        return "No";
    }

    return "Yes";
}
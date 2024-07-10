string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    bool valid_start = true;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            found_dot = true;
        }else if(isdigit(c)){
            digit_count++;
        }else{
            before_dot += c;
            if(i==0){
                valid_start = isalpha(c);
            }
        }
    }

    if(digit_count > 3 || !found_dot || before_dot.empty() || !valid_start || 
       (file_name.length()-before_dot.length()-1) == 0){
        return "No";
    }else{
        string after_dot = file_name.substr(before_dot.length()+1);
        vector<string> valid_extensions = {"txt", "exe", "dll"};
        if(find(valid_extensions.begin(), valid_extensions.end(), after_dot) != valid_extensions.end()){
            return "Yes";
        }else{
            return "No";
        }
    }
}
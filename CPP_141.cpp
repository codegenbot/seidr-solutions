string file_name_check(string file_name){
    int dot_count = 0;
    bool has_digits = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }
        else if(isdigit(file_name[i])){
            has_digits = true;
        }
        else if(i > 0 && !isalpha(file_name[i-1]) && file_name[i] >= 'a' && file_name[i] <= 'z' || file_name[i] >= 'A' && file_name[i] <= 'Z'){
            string before_dot = file_name.substr(0, i);
            if(before_dot.length() > 0){
                string after_dot = file_name.substr(i+1);
                if(after_dot == "txt" || after_dot == "exe" || after_dot == "dll"){
                    return "Yes";
                }
                else{
                    return "No";
                }
            }
        }
    }
    if(dot_count > 1 || has_digits > 3){
        return "No";
    }
    return "Yes";
}
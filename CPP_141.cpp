string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }else if(file_name[i] == '.'){
            has_dot = true;
            before_dot = file_name.substr(0, i);
        }
    }

    if(digit_count > 3 || !has_dot || before_dot.empty() || !isalpha(before_dot[0]) ||
       (file_name.length() - before_dot.length() - 1) != 4){
        return "No";
    }else{
        string ext = file_name.substr(file_name.length() - 4);
        if(ext == ".txt" || ext == ".exe" || ext == ".dll"){
            return "Yes";
        }else{
            return "No";
        }
    }
}
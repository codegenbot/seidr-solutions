Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(char c : file_name){
        if(isdigit(c)){
            digit_count++;
        }else if(c == '.'){
            has_dot = true;
        }else if(!has_dot){
            before_dot += c;
        }
    }

    if(digit_count > 3 || !has_dot || before_dot.empty() || !isalpha(before_dot[0])){
        return "No";
    }else{
        string after_dot = file_name.substr(file_name.find('.') + 1);
        if(after_dot == "txt" || after_dot == "exe" || after_dot == "dll"){
            return "Yes";
        }else{
            return "No";
        }
    }
}
Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            has_dot = true;
            before_dot = file_name.substr(0, i);
        }
        else{
            if(i > 0 && !has_dot){
                return "No";
            }
        }
    }

    if(digit_count > 3 || !has_dot || before_dot.empty() || (before_dot[0] < 'a' || before_dot[0] > 'z') && (before_dot[0] < 'A' || before_dot[0] > 'Z')){
        return "No";
    }

    string after_dot = file_name.substr(file_name.find('.') + 1);
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll"){
        return "No";
    }

    return "Yes";
}
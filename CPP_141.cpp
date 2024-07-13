Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if (file_name[i] == '.'){
            has_dot = true;
            before_dot = file_name.substr(0, i);
        }
    }

    if(digit_count > 3 || !has_dot || before_dot.empty() || !isalpha(before_dot[0]) ||
       (!has_dot && file_name.length() > 4) || 
       (has_dot && file_name.find(".txt") == string::npos &&
        file_name.find(".exe") == string::npos && file_name.find(".dll") == string::npos)){
        return "No";
    } else {
        return "Yes";
    }
}
string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else{
            if(!found_dot){
                before_dot += file_name[i];
            }
        }
    }

    if(digit_count > 3 || !found_dot || before_dot.empty() || !isalpha(before_dot[0])){
        return "No";
    }
    else if(found_dot && (file_name.substr(file_name.find('.')+1).compare("txt") != 0 &&
                           file_name.substr(file_name.find('.')+1).compare("exe") != 0 &&
                           file_name.substr(file_name.find('.')+1).compare("dll") != 0)){
        return "No";
    }
    else{
        return "Yes";
    }
}
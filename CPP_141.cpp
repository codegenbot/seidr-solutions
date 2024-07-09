Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        }
    }

    if(dot_count > 1 || digit_count > 3){
        valid = false;
    } else {
        string pre_dot = file_name.substr(0, file_name.find('.'));
        string post_dot = file_name.substr(file_name.find('.')+1);

        if(pre_dot.empty() || !isalpha(pre_dot[0])){
            valid = false;
        }

        if(post_dot != "txt" && post_dot != "exe" && post_dot != "dll"){
            valid = false;
        }
    }

    return valid ? "Yes" : "No";
}
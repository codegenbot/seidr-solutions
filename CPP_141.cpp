string file_name_check(string file_name){
    int digit_count = 0;
    int dot_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            dot_count++;
        }
    }

    if(dot_count != 1 || digit_count > 3){
        return "No";
    }

    string before_dot = "";
    for(int i=0; i<file_name.find('.'); i++){
        before_dot += file_name[i];
    }

    string after_dot = file_name.substr(file_name.find('.')+1);

    if(!isalpha(before_dot[0]) || (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")){
        return "No";
    }

    return "Yes";
}
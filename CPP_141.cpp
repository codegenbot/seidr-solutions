string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;

    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(found_dot && (file_name[i] == 't' || file_name[i] == 'x' ||
                               file_name[i] == 'd' || file_name[i] == 'l' ||
                               file_name[i] == 'e')){
            return "Yes";
        }
    }

    if(digit_count > 3 || !found_dot) return "No";

    return (isalpha(file_name[0]) && found_dot) ? "Yes" : "No";
}
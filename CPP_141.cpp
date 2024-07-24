Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;
    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }else if(file_name[i] == '.'){
            found_dot = true;
        } else if(!found_dot && !isalpha((unsigned char)file_name[i])) {
            valid_prefix = false;
        }
    }
    return (digit_count <= 3 && found_dot && valid_prefix) ? "Yes" : "No";
}
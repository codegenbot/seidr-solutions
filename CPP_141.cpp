Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            found_dot = true;
        }
        else if(!found_dot && !isalpha(file_name[i])) return "No";
    }
    if(!found_dot || file_name.find('.') + 1 >= file_name.length() || 
       (file_name.find('.') + 1 < file_name.length() && 
       (file_name.substr(file_name.find('.')+1).compare("txt") != 0 &&
       file_name.substr(file_name.find('.')+1).compare("exe") != 0 &&
       file_name.substr(file_name.find('.')+1).compare("dll") != 0)) 
    return "No";
    return "Yes";
}
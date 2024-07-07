string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    char prev_char = ' ';

    for(int i=0; i<file_name.size(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            prev_char = '.';
        }else if(isdigit(file_name[i])){
            digit_count++;
            prev_char = file_name[i];
        }else{
            if(prev_char != '.' && !isalpha(prev_char) && prev_char != ' '){
                return "No";
            }
            prev_char = file_name[i];
        }
    }

    if(digit_count > 3 || dot_count != 1)
        return "No";

    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos+1);
    
    if(ext != "txt" && ext != "exe" && ext != "dll")
        return "No";
    
    return "Yes";
}
string file_name_check(string file_name){
    int dot_count = 0;
    bool valid_start = false;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dot_count++;
        }else if(isdigit(c)){
            digit_count++;
        }else if(i==0 && !isalpha(c))
            return "No";
        else
            valid_start = true;
    }

    if(dot_count != 1)
        return "No";
    if(digit_count > 3 || (file_name.find(".txt") == string::npos &&
                            file_name.find(".exe") == string::npos &&
                            file_name.find(".dll") == string::npos))
        return "No";

    return valid_start ? "Yes" : "No";
}
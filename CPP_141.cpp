string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(char c : file_name){
        if(c == '.'){
            dot_count++;
            if(dot_count > 1) {
                valid = false;
                break;
            }
        } else if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) {
                valid = false;
                break;
            }
        } else if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z')){
            valid = false;
            break;
        }
    }

    return valid ? "Yes" : "No";
}
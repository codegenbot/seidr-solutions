string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];

        if(c == '.')
            dot_count++;
        else if(c >= '0' && c <= '9')
            digit_count++;

        if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
            valid = false;
    }

    if(digit_count > 3)
        valid = false;

    if(dot_count != 1)
        valid = false;

    return valid ? "Yes" : "No";
}
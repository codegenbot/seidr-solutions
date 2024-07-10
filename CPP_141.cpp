Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    bool valid_start = true;
    string start_part = "";
    string end_part = "";

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            found_dot = true;
        } else if(isdigit(c)){
            digit_count++;
        } else {
            if(i > 0){
                start_part += c;
                valid_start &= isalpha(c);
            } else {
                valid_start = false;
            }
        } else {
            end_part += c;
        }
    }

    return (found_dot && digit_count <= 3 && valid_start && 
            (end_part == "txt" || end_part == "exe" || end_part == "dll")) ? "Yes" : "No";
}
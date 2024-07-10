string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        }
    }

    if(digit_count > 3 || dot_count != 1) return "No";

    string first_part = "";
    for(int i = 0; i < file_name.find('.'); i++){
        first_part += file_name[i];
    }

    if(!isalpha(first_part[0])) return "No";
    
    string second_part = file_name.substr(file_name.find('.') + 1);
    if(second_part != "txt" && second_part != "exe" && second_part != "dll") return "No";

    return "Yes";
}
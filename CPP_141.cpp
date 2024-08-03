Here is the completed code:

string file_name_check(string file_name){
    int dot_count = 0;
    bool has_letter = false;
    int digit_count = 0;

    for(char c : file_name){
        if(c == '.'){
            dot_count++;
        }else if(isdigit(c)){
            digit_count++;
        }else if(isalpha(c) || c == '_'){
            has_letter = true;
        }
    }

    if(dot_count != 1 || digit_count > 3 || !has_letter){
        return "No";
    }

    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll"){
        return "No";
    }

    return "Yes";
}
string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool is_valid = true;

    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }
        else if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(dot_count == 1){
            string ext = file_name.substr(i+1);
            is_valid &= (ext == "txt" || ext == "exe" || ext == "dll");
        }
    }

    return is_valid ? "Yes" : "No";
}
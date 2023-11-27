string file_name_check(string file_name){
    int digits_count = 0;
    int dot_count = 0;
    int dot_index = -1;
    int file_name_length = file_name.length();

    for(int i = 0; i < file_name_length; i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digits_count++;
        }
        else if(file_name[i] == '.'){
            dot_count++;
            dot_index = i;
        }
    }

    if(digits_count > 3 || dot_count != 1 || dot_index == 0 || dot_index == file_name_length - 1){
        return "No";
    }

    string extension = file_name.substr(dot_index + 1);

    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }

    return "Yes";
}
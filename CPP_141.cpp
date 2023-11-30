string file_name_check(string file_name){
    int count_digits = 0;
    int dot_index = -1;
    int dot_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count_digits++;
        }
        else if(file_name[i] == '.'){
            dot_index = i;
            dot_count++;
        }
    }

    if(count_digits > 3 || dot_count != 1){
        return "No";
    }

    string name_before_dot = file_name.substr(0, dot_index);
    string extension = file_name.substr(dot_index+1);

    if(name_before_dot.length() == 0 || !(isalpha(name_before_dot[0]))){
        return "No";
    }

    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }

    return "Yes";
}
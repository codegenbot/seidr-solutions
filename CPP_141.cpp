string file_name_check(string file_name){
    int digit_count = 0;
    int dot_count = 0;
    bool valid_start = false;

    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        } else if(file_name[i] == '.'){
            dot_count++;
        } else if(i==0 && isalpha(file_name[i])){
            valid_start = true;
        }
    }

    string extension = file_name.substr(file_name.find('.')+1);
    bool valid_extension = false;

    for(int i=0; i<extension.length(); i++){
        if(extension[i] == 't' || extension[i] == 'x' || extension[i] == 'd' || extension[i] == 'l'){
            valid_extension = true;
        }
    }

    return (digit_count <= 3 && dot_count == 1 && valid_start && valid_extension) ? "Yes" : "No";
}
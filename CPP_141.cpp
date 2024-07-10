string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool first_letter_valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }else if(isdigit(file_name[i])){
            digit_count++;
        }else if(i==0 && !isalpha(file_name[i])){
            first_letter_valid = false;
        }
    }

    if(dot_count > 1 || digit_count > 3 || first_letter_valid==false){
        return "No";
    }else{
        string ext = file_name.substr(file_name.find('.')+1);
        if(ext != "txt" && ext != "exe" && ext != "dll"){
            return "No";
        }
        return "Yes";
    }
}
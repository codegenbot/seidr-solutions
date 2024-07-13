string file_name_check(string file_name){
    int dot_count = 0;
    bool valid_start = false;
    int digit_count = 0;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }else if(isdigit(file_name[i])){
            digit_count++;
        }else if(i==0 && !isalpha(file_name[i])){
            return "No";
        }else{
            valid_start = true;
        }
    }

    if(dot_count != 1 || digit_count > 3 || file_name.find(".txt") == string::npos &&
       file_name.find(".exe") == string::npos && file_name.find(".dll") == string::npos){
        return "No";
    }else if(!valid_start){
        return "No";
    }

    return "Yes";
}
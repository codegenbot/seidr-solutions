string file_name_check(string file_name){
    bool valid = true;
    int digit_count = 0;
    for(int i = 0; i < file_name.size(); i++){
        if(isdigit(file_name[i])){
            digit_count++;
        }else if(file_name[i] == '.'){
            break;
        }
    }
    
    if(digit_count > 3 || file_name.find('.') == string::npos || 
       !isalpha(file_name[0]) || file_name.size() - file_name.find('.').size() < 4){
        valid = false;
    }else{
        string extension = file_name.substr(file_name.find('.') + 1);
        if(extension != "txt" && extension != "exe" && extension != "dll"){
            valid = false;
        }
    }
    
    return valid ? "Yes" : "No";
}
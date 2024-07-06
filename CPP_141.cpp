string file_name_check(string file_name){
    int digitCount = 0;
    bool hasDot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
        }
        else if(c == '.'){
            hasDot = true;
        }
        else if(i == 0 && !(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z')){
            return "No";
        }
    }
    if(digitCount > 3 || !hasDot){
        return "No";
    }
    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    return "Yes";
}
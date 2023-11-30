string file_name_check(string file_name){
    int digits = 0;
    int dot = 0;
    int dotIndex = -1;
    int len = file_name.length();
    
    for(int i=0; i<len; i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digits++;
        }
        else if(file_name[i] == '.'){
            dot++;
            dotIndex = i;
        }
    }
    
    if(digits > 3 || dot != 1 || dotIndex == 0 || dotIndex == len-1){
        return "No";
    }
    
    string extension = file_name.substr(dotIndex+1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    
    return "Yes";
}
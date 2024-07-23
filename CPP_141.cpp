string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else{
            if(i > 0 && !foundDot){
                return "No";
            }
        }
    }
    if(count > 3 || !foundDot || file_name.find(".") != (file_name.length() - 4) || 
       (file_name.substr(file_name.find(".")+1).find("txt") == string::npos &&
       file_name.substr(file_name.find(".")+1).find("exe") == string::npos &&
       file_name.substr(file_name.find(".")+1).find("dll") == string::npos)){
        return "No";
    }
    return "Yes";
}
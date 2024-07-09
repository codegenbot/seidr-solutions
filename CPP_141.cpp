string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else{
            if(!foundDot){
                return "No";
            }
        }
    }
    if(count > 3 || !foundDot || file_name.find('.') != file_name.rfind('.')){
        return "No";
    }
    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    return "Yes";
}
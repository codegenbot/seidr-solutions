string file_name_check(string file_name){
    int count = 0;
    int dotIndex = -1;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            dotIndex = i;
        }
    }
    if(count > 3 || dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length()-1){
        return "No";
    }
    string extension = file_name.substr(dotIndex+1);
    if(extension == "txt" || extension == "exe" || extension == "dll"){
        return "Yes";
    }
    return "No";
}
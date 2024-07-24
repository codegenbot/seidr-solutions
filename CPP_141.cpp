string file_name_check(string file_name){
    int count = 0;
    bool dotFound = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count++;
        }
        else if(file_name[i] == '.'){
            dotFound = true;
        }
        else if(!dotFound && (file_name[i] < 'a' || file_name[i] > 'z') && (file_name[i] < 'A' || file_name[i] > 'Z')){
            return "No";
        }
    }
    if(count > 3) return "No";
    string extension = "";
    for(int i=file_name.length()-1; i>=0; i--){
        if(file_name[i] == '.'){
            break;
        }
        else{
            extension = file_name[i]+extension;
        }
    }
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    if(!dotFound) return "No";
    return "Yes";
}
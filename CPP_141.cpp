string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot && (file_name[i] == 't' || file_name[i] == 'x' || file_name[i] == 'd' || 
                              file_name[i] == 'l' || file_name[i] == 'e')){
            return "Yes";
        }
    }
    if(!foundDot) return "No";
    string beforeDot = "";
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            break;
        }
        else{
            beforeDot += file_name[i];
        }
    }
    if(beforeDot.empty()) return "No";
    for(int i=0; i<beforeDot.length(); i++){
        if(!(beforeDot[i] >= 'a' && beforeDot[i] <= 'z') && 
           !(beforeDot[i] >= 'A' && beforeDot[i] <= 'Z')) return "No";
    }
    return "Yes";
}
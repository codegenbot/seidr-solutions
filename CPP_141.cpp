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
        else if(foundDot && (file_name[i] == 't' || file_name[i] == 'x' || file_name[i] == 'd' || 
                              file_name[i] == 'l' || file_name[i] == 'e')){
            return "Yes";
        }
    }
    if(count > 3) return "No";
    if(!foundDot) return "No";
    if(file_name[0] < 'a' || file_name[0] > 'z' && file_name[0] < 'A' || file_name[0] > 'Z') 
        return "No";
    return (count <= 3 && foundDot && (file_name.find('.') != string::npos)) ? "Yes" : "No";
}
Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    string beforeDot;
    
    for(int i = 0; i < file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
            break;
        }
        else{
            beforeDot += file_name[i];
        }
    }
    
    if(!foundDot || beforeDot.empty() || !isalpha(beforeDot[0])) return "No";
    
    string afterDot = "";
    for(int i = file_name.length()-1; i > 0; i--){
        if(file_name[i] == '.') break;
        else afterDot = file_name[i] + afterDot;
    }
    
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll") return "No";
    
    return "Yes";
}
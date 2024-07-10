Here is the completed code:

string file_name_check(string file_name){
    int digitCount = 0;
    bool hasDot = false;
    string beforeDot;
    
    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        
        if(c == '.'){
            hasDot = true;
            break;
        }else if(isdigit(c)){
            digitCount++;
        }else{
            beforeDot += c;
        }
    }
    
    if(!hasDot || digitCount > 3){
        return "No";
    }
    
    string afterDot = file_name.substr(file_name.find('.') + 1);
    
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll"){
        return "No";
    }
    
    if(beforeDot.empty() || !isalpha(beforeDot[0])){
        return "No";
    }
    
    return "Yes";
int dotPos = file_name.find('.');
    if(dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1){
        return "No";
    }
    string nameBeforeDot = file_name.substr(0, dotPos);
    string extAfterDot = file_name.substr(dotPos + 1);
    if(nameBeforeDot.size() == 0 || extAfterDot.size() == 0 || 
       extAfterDot != "txt" && extAfterDot != "exe" && extAfterDot != "dll"){
        return "No";
    }
    int digitsCount = 0;
    for(char c : file_name){
        if(c >= '0' && c <= '9'){
            digitsCount++;
        }
    }
    if(digitsCount > 3){
        return "No";
    }
    
    if((nameBeforeDot[0] >= 'a' && nameBeforeDot[0] <= 'z') || 
       (nameBeforeDot[0] >= 'A' && nameBeforeDot[0] <= 'Z')){
        return "Yes";
    } else {
        return "No";
    }
}
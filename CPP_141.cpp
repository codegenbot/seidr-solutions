string file_name_check(string file_name){
    bool isValid = true;

    int dotIndex = -1;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dotIndex = i;
            break;
        }
    }

    if(dotIndex < 0 || dotIndex == file_name.length() - 1){
        isValid = false;
    } else{
        string beforeDot = file_name.substr(0, dotIndex);
        string afterDot = file_name.substr(dotIndex + 1);

        bool hasLetter = false;
        for(int i=0; i(beforeDot.length()); i++){
            if(isalpha(beforeDot[i])){
                hasLetter = true;
                break;
            }
        }

        if(!hasLetter || beforeDot.length() > 31){
            isValid = false;
        }

        int digitCount = 0;
        for(int i=0; i<beforeDot.length(); i++){
            if(isdigit(beforeDot[i])){
                digitCount++;
                if(digitCount > 3){
                    isValid = false;
                    break;
                }
            }
        }

        set<string> allowedExtensions {"txt", "exe", "dll"};
        if(allowedExtensions.count(afterDot) == 0){
            isValid = false;
        }
    }

    return isValid ? "Yes" : "No";
}
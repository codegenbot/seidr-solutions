string file_name_check(string file_name){
    string beforeDot = "";
    int dotCount = 0;
    bool hasLetters = false;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            dotCount++;
            if(dotCount > 1) return "No";
            beforeDot = file_name.substr(0, i);
            string afterDot = file_name.substr(i+1);
            if(afterDot == "txt" || afterDot == "exe" || afterDot == "dll")
                return "Yes";
            else
                return "No";
        }
        else if(c >= '0' && c <= '9'){
            if(hasLetters) return "No";
            hasLetters = true;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            if(beforeDot.empty()) beforeDot += c;
        }
    }

    if(dotCount == 1 && !beforeDot.empty() && hasLetters) return "Yes";
    return "No";
}
string file_name_check(string file_name){
    int digitCount = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
            if(digitCount > 3) return "No";
        } else if(c == '.'){
            foundDot = true;
        } else if(!foundDot && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z')) {
            return "No";
        }
    }
    if(foundDot){
        size_t dotPos = file_name.find('.');
        string extension = file_name.substr(dotPos+1);
        if(extension != "txt" && extension != "exe" && extension != "dll") 
            return "No";
    } else {
        return "No";
    }
    return "Yes";
}
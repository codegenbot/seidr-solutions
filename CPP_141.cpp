std::string file_name_check(std::string file_name){
    int digitCount = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digitCount++;
        }else if(c == '.'){
            foundDot = true;
        }else{
            if(foundDot && (c < 'a' || c > 'z' && c < 'A' || c > 'Z')){
                return "No";
            }
        }
    }
    if(digitCount > 3 || !foundDot) return "No";
    return "Yes";
}
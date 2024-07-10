string file_name_check(string file_name){
    int digitCount = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digitCount++;
            if(digitCount > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(!foundDot && !isalpha((unsigned char)file_name[i])){
            return "No";
        }
    }
    if(!foundDot) return "No";
    string extension = file_name.substr(file_name.find('.')+1);
    string allowedExtensions[] = {"txt", "exe", "dll"};
    for(int i=0; i<3; i++){
        if(extension == allowedExtensions[i]) return "Yes";
    }
    return "No";
}
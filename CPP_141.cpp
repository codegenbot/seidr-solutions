string file_name_check(string file_name){
    bool oneDot = false;
    int digitCount = 0;
    for(int i=0; i<file_name.size(); i++){
        char c = file_name[i];
        if(c == '.'){
            oneDot = true;
        }else if(isdigit(c)){
            digitCount++;
            if(digitCount > 3) return "No";
        }else{
            if(i == 0 && !isalpha(c)) return "No"; // check the first letter
        }
    }
    if(!oneDot || file_name.find('.') == string::npos)
        return "No"; 
    int dotIndex = file_name.find('.');
    string ext = file_name.substr(dotIndex+1);
    if(ext != "txt" && ext != "exe" && ext != "dll")
        return "No";
    return "Yes";
}
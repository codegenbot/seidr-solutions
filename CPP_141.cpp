Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(char c : file_name){
        if(c >= '0' && c <= '9'){
            count++;
        }else if(c == '.'){
            foundDot = true;
        }else if(c < 'a' || (c > 'z' && c < 'A') || c > 'Z'){
            return "No";
        }
    }
    if(count > 3 || !foundDot){
        return "No";
    }
    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    return "Yes";
}
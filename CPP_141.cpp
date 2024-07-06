string file_name_check(string file_name){
    int count = 0;
    bool dotFound = false;
    string beforeDot = "";
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            dotFound = true;
        }
        else{
            if(!dotFound){
                beforeDot += file_name[i];
            }
        }
    }
    if(count > 3 || !dotFound || beforeDot.empty() || (!isalpha(beforeDot[0])) || (file_name.length()-1-dotFind()) <= 3) {
        return "No";
    } else {
        string afterDot = file_name.substr(file_name.find('.')+1);
        if(afterDot == "txt" || afterDot == "exe" || afterDot == "dll")
            return "Yes";
        else
            return "No";
    }
}
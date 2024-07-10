string file_name_check(string file_name){
    int count = 0;
    bool hasDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }else if(file_name[i] == '.'){
            hasDot = true;
        }
    }
    if(!hasDot) return "No";
    string beforeDot = file_name.substr(0, file_name.find('.'));
    if(beforeDot.empty() || !isalpha(beforeDot[0])) return "No";
    string afterDot = file_name.substr(file_name.find('.') + 1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if(find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) return "No";
    return "Yes";
}
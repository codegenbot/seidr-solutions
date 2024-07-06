string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot && (i != file_name.length() - 4)){
            if(!isalpha(file_name[i]) || !ispunct(file_name[i+1]) || !ispunct(file_name[i+2]) || !ispunct(file_name[i+3])){
                return "No";
            }
        }
    }
    if(foundDot && (file_name.find(".txt") == string::npos && file_name.find(".exe") == string::npos && file_name.find(".dll") == string::npos)) return "No";
    return "Yes";
}
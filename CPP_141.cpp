Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length();i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else{
            if(!foundDot) return "No";
        }
    }
    if(foundDot){
        string ext = file_name.substr(file_name.find('.') + 1);
        if(ext != "txt" && ext != "exe" && ext != "dll") return "No";
    }
    return "Yes";
}
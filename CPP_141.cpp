Here is the completed code:

string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.length(); i++){
        if(isdigit(file_name[i])){
            count++;
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot && (i < file_name.find('.'))){
            return "No";
        }
    }
    if(count > 3 || !foundDot) {
        return "No";
    }
    int pos = file_name.find('.');
    string ext = file_name.substr(pos+1);
    if(ext != "txt" && ext != "exe" && ext != "dll") {
        return "No";
    }
    return "Yes";
}
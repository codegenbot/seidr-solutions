Here is the completed code:

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
        else if(foundDot && (i != file_name.length()-4 || !string("txtexe.dll").find(file_name.substr(i)))){
            return "No";
        }
    }
    if(!foundDot) return "No";
    if(count > 0) return "No";
    return "Yes";
}
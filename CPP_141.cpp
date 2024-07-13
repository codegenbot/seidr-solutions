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
        else if(foundDot && (i != file_name.length()-4 || file_name.substr(i).compare("txt") != 0 && file_name.substr(i).compare("exe") != 0 && file_name.substr(i).compare("dll") != 0)){
            return "No";
        }
    }
    if(count > 3 || !foundDot) return "No";
    return "Yes";
}
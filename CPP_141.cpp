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
        else if(foundDot && (i != file_name.length()-1) && (file_name.substr(i+1).find("txt") != string::npos || file_name.substr(i+1).find("exe") != string::npos || file_name.substr(i+1).find("dll") != string::npos)){
            return "Yes";
        }
    }
    if(count > 3 || !foundDot){
        return "No";
    }
    else{
        for(int i=0; i<file_name.length(); i++){
            if(isalpha(file_name[i]) && i == 0){
                return "Yes";
            }
        }
        return "No";
    }
}
string file_name_check(string file_name){
    int count = 0;
    bool foundDot = false;
    for(int i=0; i<file_name.size(); i++){
        if(isdigit(file_name[i])){
            count++;
            if(count > 3) return "No";
        }
        else if(file_name[i] == '.'){
            foundDot = true;
        }
        else if(foundDot && (file_name.substr(i).find("txt") != string::npos || file_name.substr(i).find("exe") != string::npos || file_name.substr(i).find("dll") != string::npos)){
            return "Yes";
        }
    }
    if(count > 3 || !foundDot) return "No";
    if((file_name[0] < 'a' && file_name[0] != '0') || (file_name[0] > 'z' && file_name[0] < 'A') || (file_name[0] > 'Z')) return "No";
    return "Yes";
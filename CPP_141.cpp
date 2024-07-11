string file_name_check(string file_name){
    int dot_count = 0;
    bool valid = true;
    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1) return "No";
        } else if(isdigit(file_name[i])){
            if(++count > 3) return "No";
        } else if(!isalpha(file_name[i])) {
            valid = false;
        }
    }
    if(valid && (file_name.find("txt") != string::npos || file_name.find("exe") != string::npos || file_name.find("dll") != string::npos)) {
        return "Yes";
    } else {
        return "No";
    }
}
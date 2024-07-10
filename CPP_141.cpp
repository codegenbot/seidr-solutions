string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
            if(dot_count > 1) return "No";
        }
        else if(isdigit(file_name[i])){
            digit_count++;
            if(digit_count > 3) return "No";
        }
        else if(!isalpha(file_name[i]) && file_name[i] != '.') {
            valid = false;
            break;
        }
    }

    int pos = file_name.find('.');
    if(pos == -1 || !valid) return "No";

    string extension = file_name.substr(pos+1);
    if(extension.compare("txt") && extension.compare("exe") && extension.compare("dll")) {
        return "No";
    }

    return "Yes";
}
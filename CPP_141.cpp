int countDigits(string str) {
    int count = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name){
    bool valid = true;

    if(countDigits(file_name) > 3) {
        valid = false;
    }

    int dotIndex = -1;
    for(int i=0; i<file_name.length(); i++) {
        if(file_name[i] == '.') {
            dotIndex = i;
            break;
        }
    }

    if(dotIndex == -1 || file_name.substr(0, dotIndex).empty() ||
       !isalpha(toupper(file_name[0]))) {
        valid = false;
    } else if(!(file_name.substr(dotIndex+1) == "txt" || 
                file_name.substr(dotIndex+1) == "exe" || 
                file_name.substr(dotIndex+1) == "dll")) {
        valid = false;
    }

    return valid ? "Yes" : "No";
}
int digitCount = 0;
    bool valid = true;
    
    for(char c : file_name) {
        if(isdigit(c)) {
            digitCount++;
        } else if(c == '.') {
            if(file_name.find('.') != file_name.rfind('.')) {
                valid = false;
                break;
            }
            string extension = file_name.substr(file_name.rfind('.') + 1);
            if(extension != "txt" && extension != "exe" && extension != "dll") {
                valid = false;
                break;
            }
        }
    }
    
    if(digitCount > 3 || !valid) {
        return "No";
    }
    
    if(isalpha(file_name[0])) {
        return "Yes";
    }
    
    return "No";
}
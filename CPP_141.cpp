int countDigits(string str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool isValidFileName(string file_name) {
    int dotIndex = file_name.find('.');
    if (dotIndex == -1 || dotIndex == file_name.length() - 1) {
        return false;
    }

    string beforeDot = file_name.substr(0, dotIndex);
    string afterDot = file_name.substr(dotIndex + 1);

    if (!all_of(beforeDot.begin(), beforeDot.end(), ::isalpha)) {
        return false;
    }
    
    if (countDigits(file_name) > 3 || countDigits(beforeDot) > 0) {
        return false;
    }

    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) {
        return false;
    }
    
    return true;
}

string file_name_check(string file_name){
    if(isValidFileName(file_name)) {
        return "Yes";
    } else {
        return "No";
    }
}
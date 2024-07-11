int countDigits = 0;
    int dotPos = file_name.find('.');
    
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.length() - 1) {
        return "No";
    }
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            countDigits++;
        }
    }
    
    if (countDigits > 3) {
        return "No";
    }
    
    string prefix = file_name.substr(0, dotPos);
    string suffix = file_name.substr(dotPos + 1);
    
    if (prefix.empty() || !(isalpha(prefix[0]))) {
        return "No";
    }
    
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
    
    return "Yes";
}
int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    
    size_t dotIndex = file_name.find('.');
    if (digitCount > 3 || dotIndex == string::npos || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }
    
    string beforeDot = file_name.substr(0, dotIndex);
    string afterDot = file_name.substr(dotIndex + 1);

    if (!isalpha(beforeDot[0]) || afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }
    
    return "Yes";
}
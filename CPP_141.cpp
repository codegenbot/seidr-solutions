int digitCount = 0;
    bool hasDot = false;
    string beforeDot, afterDot;
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            if (hasDot || beforeDot.empty()) {
                return "No";
            }
            hasDot = true;
        } else if (hasDot) {
            afterDot += c;
        } else {
            beforeDot += c;
        }
    }
    
    if (digitCount > 3 || !hasDot || beforeDot.empty() || !isalpha(beforeDot[0]) || 
        (afterDot != "txt" && afterDot != "exe" && afterDot != "dll")) {
        return "No";
    }
    
    return "Yes";
}
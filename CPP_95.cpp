for (auto& pair : dict) {  
    bool isLower = true;
    for(char c: pair.first) {
        if (!islower(c)) {
            isLower = false;
            break;
        }
    }
    bool isUpper = true;
    for(char c: pair.first) {
        if (!isupper(c)) {
            isUpper = false;
            break;
        }
    }

    allLower &= isLower;
    allUpper &= isUpper;
}
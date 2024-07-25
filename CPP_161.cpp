string result = "";
    bool hasLetter = false;
    
    for (char &c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            if (isupper(c)) {
                result += tolower(c);
            } else {
                result += toupper(c);
            }
        } else {
            result += c;
        }
    }
    
    if (!hasLetter) {
        reverse(result.begin(), result.end());
    }
    
    return result;
}
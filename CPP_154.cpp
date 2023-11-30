bool cycpattern_check(string a, string b) {
    if (a.length() < b.length()) {
        return false;
    }
    
    for (int i = 0; i < a.length(); i++) {
        bool isRotation = true;
        for (int j = 0; j < b.length(); j++) {
            if (a[(i + j) % a.length()] != b[j]) {
                isRotation = false;
                break;
            }
        }
        if (isRotation) {
            return true;
        }
    }
    
    return false;
}
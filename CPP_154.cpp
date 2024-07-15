bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if (temp.length() >= b.length()) {
            string rotatedB = b;
            for (int j = 1; j <= temp.length() / b.length(); j++) {
                rotatedB += b;
            }
            if (rotatedB.find(temp) != string::npos) {
                return true;
            }
        }
    }
    return false;
}
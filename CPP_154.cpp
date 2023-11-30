bool cycpattern_check(string a, string b) {
    int lenA = a.length();
    int lenB = b.length();

    if (lenA < lenB) {
        return false;
    }

    string temp = a + a;

    if (temp.find(b) != string::npos) {
        return true;
    }

    for (int i = 1; i < lenB; i++) {
        string rotation = b.substr(i, lenB - i) + b.substr(0, i);

        if (temp.find(rotation) != string::npos) {
            return true;
        }
    }

    return false;
}
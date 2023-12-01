bool cycpattern_check(string a, string b) {
    int lenA = a.length();
    int lenB = b.length();

    if (lenA < lenB) {
        return false;
    }

    string aDouble = a + a;

    for (int i = 0; i <= lenA - lenB; i++) {
        string substring = aDouble.substr(i, lenB);
        if (substring == b) {
            return true;
        }
    }

    return false;
}
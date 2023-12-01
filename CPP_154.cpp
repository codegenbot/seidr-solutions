bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    // Return false if b is longer than a
    if (m > n) {
        return false;
    }

    // Concatenate a with itself to handle rotations
    string temp = a + a;

    // Check if b is a substring of temp
    if (temp.find(b) != string::npos) {
        return true;
    }

    // Check if any rotation of b is a substring of temp
    for (int i = 1; i < m; i++) {
        string rotation = b.substr(i) + b.substr(0, i);
        if (temp.find(rotation) != string::npos) {
            return true;
        }
    }

    // Return false if no substring or rotation found
    return false;
}
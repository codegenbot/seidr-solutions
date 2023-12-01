bool cycpattern_check(string a, string b) {
    int n = a.length();
    int m = b.length();

    // If the length of b is greater than a, it is not possible to find b as a substring in a
    if (m > n) {
        return false;
    }

    // Concatenate a with itself to handle rotations
    a += a;

    // Check if b is a substring of a
    if (a.find(b) != string::npos) {
        return true;
    }

    return false;
}
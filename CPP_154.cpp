bool cycpattern_check(string a, string b) {
    // Check if the length of both words is equal
    if(a.length() != b.length())
        return false;

    // Concatenate the first word with itself to check for possible rotations
    string combined = a + a;

    // Check if the second word or any rotation of it is a substring in the concatenated word
    if(combined.find(b) != string::npos)
        return true;

    return false;
}
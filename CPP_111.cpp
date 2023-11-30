map<char, int> histogram(string test) {
    map<char, int> result;
    // iterate through each character in the string
    for (char c : test) {
        // ignore spaces
        if (c != ' ') {
            // increase the count for the character
            result[c]++;
        }
    }
    return result;
}
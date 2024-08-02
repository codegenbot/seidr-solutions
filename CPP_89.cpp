string encrypt(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    
    for (char c : s) {
        if (isalpha(c)) {
            int index = tolower(c) - 'a';
            index = (index + 2 * 2) % 26;
            result += alphabet[index];
        } else {
            result += c;
        }
    }
    
    return result;
}
string encrypt(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int index = alphabet.find(c);
            index += 2 * 2; // rotate down by 4 places
            while (index > 25) {
                index -= 26;
            }
            result += alphabet[index];
        } else {
            result += c;
        }
    }
    
    return result;
}
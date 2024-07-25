string encrypt(string s){
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char newChar = (c + 4); // down by two multiplied to two places
            while (newChar > 'z') {
                newChar -= 26;
            }
            result += newChar;
        } else if (c >= 'A' && c <= 'Z') {
            char newChar = (c + 4); // down by two multiplied to two places
            while (newChar > 'Z') {
                newChar -= 26;
            }
            result += newChar;
        } else {
            result += c;
        }
    }
    return result;
}
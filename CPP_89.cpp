string encrypt(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result = "";
    for (char c : s) {
        int index = alphabet.find(tolower(c));
        if (index != -1) {
            index = (alphabet.size() + index - 2 * 2) % alphabet.size();
            if (isupper(c)) {
                result += toupper(alphabet[index]);
            } else {
                result += alphabet[index];
            }
        } else {
            result += c;
        }
    }
    return result;
}
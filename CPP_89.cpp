string encrypt(string s) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string result;

    for (char c : s) {
        int index = alphabet.find(tolower(c));
        if (index != -1) {
            index = (index + 2 * 26) % 26;
            if (c >= 'a' && c <= 'z') {
                result += alphabet[index];
            } else if (c >= 'A' && c <= 'Z') {
                result += toupper(alphabet[index]);
            } else {
                result += c;
            }
        } else {
            result += c;
        }
    }

    return result;
}
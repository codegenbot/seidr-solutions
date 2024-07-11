string solve(string s) {
    string result = "";
    bool hasLetter = false;

    for (char c : s) {
        if (isalpha(c)) { // Check if character is a letter
            hasLetter = true;
            result += toupper(islower(c)) ? tolower(c) : toupper(c);
        } else {
            result += c;
        }
    }

    return hasLetter ? result : string(result.rbegin(), result.rend());
}
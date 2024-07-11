string solve(string s) {
    string result = "";
    for (char c : s) {
        if (!isalpha(c)) {
            result += c;
        } else {
            char newC = tolower(c);
            newC = (newC == 'z' || newC == 'Z') ? toupper(newC) : tolower(newC);
            result += newC;
        }
    }
    if (result.empty()) {
        return string(1, s[0]);
    } else {
        return result;
    }
}
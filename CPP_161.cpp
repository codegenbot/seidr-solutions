string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (islower(c))? toupper(c) : tolower(c);
        }
        else {
            c = ' '; // replace non-alphabetic characters with space
        }
        result += c;
    }
    reverse(result.begin(), result.end());
    return result.empty() ? s : result.substr(1, result.size()-2); 
}
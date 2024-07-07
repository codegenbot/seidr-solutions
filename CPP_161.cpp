Here is the solution:

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == 'a' ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
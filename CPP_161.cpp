Here is the solution:

string solve(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (islower(c))? toupper(c): tolower(c);
        }
        result += c;
    }
    if (!any(isalpha, s)) {
        reverse(result.begin(), result.end());
    }
    return result;
}
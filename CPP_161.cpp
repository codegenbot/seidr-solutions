Here is your modified code:

Str solve(Str s) {
    Str result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += tolower(c) == c ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? Str(s).reverse() : result;
}
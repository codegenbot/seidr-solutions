string solve(string s){
    string result = "";
    bool flag = false;

    for (char& c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            flag = true;
        } else {
            result += c;
        }
    }

    if (!flag) {
        reverse(result.begin(), result.end());
    }

    return result;
}
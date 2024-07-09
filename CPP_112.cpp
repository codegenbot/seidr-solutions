vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char x : s) {
        bool found = false;
        for (char y : c) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found)
            result += x;
    }
    vector<string> output;
    output.push_back(result);
    if (result == "" || is_palindrome(result))
        output.push_back("True");
    else
        output.push_back("False");
    return output;

}

bool is_palindrome(string s) {
    string str = s;
    reverse(str.begin(), str.end());
    return (s == str);
}
vector<string> reverse_delete(string s, string c) {
    string result;
    bool isPalindrome = true;

    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }

    int start = 0;
    int end = result.length() - 1;

    while (start < end) {
        if (result[start] != result[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    vector<string> output;
    output.push_back(result);
    output.push_back(isPalindrome ? "True" : "False");

    return output;
}
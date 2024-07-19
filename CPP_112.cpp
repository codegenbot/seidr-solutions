vector<string> reverse_delete(string s, string c) {
        string result;
        for (char ch : s) {
            if (c.find(ch) == string::npos) {
                result.push_back(ch);
            }
        }
        string palindrome_check = result;
        reverse(result.begin(), result.end());
        return {result, result == palindrome_check ? "True" : "False"};
    }
vector<string> reverse_delete(string s, string c) {
        string result = "";
        for (char ch : s) {
            if (find(c.begin(), c.end(), ch) == c.end()) {
                result += ch;
            }
        }
        string reversed = result;
        reverse(reversed.begin(), reversed.end());
        bool is_palindrome = (result == reversed);

        return {result, is_palindrome ? "True" : "False"};
    }
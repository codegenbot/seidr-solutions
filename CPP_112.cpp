vector<string> reverse_delete(string s, string c) {
        for (char ch : c) {
            s.erase(remove(s.begin(), s.end(), ch), s.end());
        }
        string result = s;
        string result_reversed = s;
        reverse(result_reversed.begin(), result_reversed.end());
        return {result, result == result_reversed ? "True" : "False"};
    }
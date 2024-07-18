vector<string> reverse_delete(string s, string c) {
        string result = "";
        for (char ch : s) {
            if (c.find(ch) == string::npos) {
                result += ch;
            }
        }
        string check = (result == string(result.rbegin(), result.rend())) ? "True" : "False";
        return {result, check};
    }
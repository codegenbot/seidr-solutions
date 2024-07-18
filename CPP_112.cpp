vector<string> reverse_delete(string s, string c){
    string result = "";
    for (char ch : s){
        if (c.find(ch) == string::npos){
            result += ch;
        }
    }

    string reversed = result;
    reverse(reversed.begin(), reversed.end());

    bool is_palindrome = (result == reversed);

    if (is_palindrome){
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}
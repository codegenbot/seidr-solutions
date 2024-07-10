vector<string> reverse_delete(string s, string c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string palindrome_check = result;
    reverse(palindrome_check.begin(), palindrome_check.end());
    return {result, result == palindrome_check ? "True" : "False"};
}
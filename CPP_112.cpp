vector<string> reverse_delete(string s, string c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string reverseResult = result;
    reverse(reverseResult.begin(), reverseResult.end());
    return {result, result == reverseResult ? "True" : "False"};
}
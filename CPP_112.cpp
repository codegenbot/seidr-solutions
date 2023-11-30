vector<string> reverse_delete(string s,string c){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string reverseResult = result;
    reverse(reverseResult.begin(), reverseResult.end());
    bool isPalindrome = (result == reverseResult);
    vector<string> output;
    output.push_back(result);
    output.push_back(isPalindrome ? "True" : "False");
    return output;
}
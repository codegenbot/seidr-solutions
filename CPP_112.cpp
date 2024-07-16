vector<string> reverse_delete(string s, string c){
    string result;
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string temp = result;
    reverse(temp.begin(), temp.end());
    bool isPalindrome = temp == result ? true : false;
    return {result, isPalindrome ? "True" : "False"};
}
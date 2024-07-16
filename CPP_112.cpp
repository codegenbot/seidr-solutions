vector<string> reverse_delete(string s, string c){
    for(auto it = s.begin(); it != s.end();){
        if(c.find(*it) != string::npos){
            it = s.erase(it);
        } else {
            ++it;
        }
    }
    string result = s;
    string resultReverse = s;
    reverse(resultReverse.begin(), resultReverse.end());
    bool isPalindrome = result == resultReverse;
    return {result, isPalindrome ? "True" : "False"};
}
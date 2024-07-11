string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string rev_result = result;
    reverse(rev_result.begin(), rev_result.end());
    return vector<string> {result, result == rev_result ? "True" : "False"};
}
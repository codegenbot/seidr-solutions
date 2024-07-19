vector<string> reverse_delete(string s, string c){
    string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string resultCopy = result;
    reverse(resultCopy.begin(), resultCopy.end());
    return {result, result == resultCopy ? "True" : "False"};
}
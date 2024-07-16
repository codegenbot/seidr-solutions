vector<string> reverse_delete(string s, string c){
        string result = "";
        for(char ch : s){
            if(c.find(ch) == string::npos){
                result += ch;
            }
        }
        string revResult = result;
        reverse(revResult.begin(), revResult.end());
        return {result, result == revResult ? "True" : "False"};
    }
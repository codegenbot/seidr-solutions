vector<string> reverse_delete(string s, string c){
        string result = "";
        for(char& ch : s){
            if(c.find(ch) == string::npos){
                result += ch;
            }
        }
        string reversed_result = result;
        reverse(reversed_result.begin(), reversed_result.end());
        if(result == reversed_result){
            return {result, "True"};
        } else {
            return {result, "False"};
        }
    }
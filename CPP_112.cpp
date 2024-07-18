vector<string> reverse_delete(string s, string c){
        
        string result = "";
        for(char ch : s){
            if(c.find(ch) == string::npos){
                result += ch;
            }
        }
        
        string result_reverse = result;
        reverse(result_reverse.begin(), result_reverse.end());
        
        if(result == result_reverse){
            return {result, "True"};
        } else {
            return {result, "False"};
        }
    }
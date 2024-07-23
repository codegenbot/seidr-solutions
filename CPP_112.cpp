string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    return {result, result == reversed_result ? "True" : "False"};
}
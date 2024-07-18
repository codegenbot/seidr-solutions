string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string resultReversed = result;
    reverse(resultReversed.begin(), resultReversed.end());
    return {result, result == resultReversed ? "True" : "False"};
}
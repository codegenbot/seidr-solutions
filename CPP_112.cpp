string result = "";
    for(char ch : s){
        if(c.find(ch) == string::npos){
            result += ch;
        }
    }
    string original = result;
    reverse(result.begin(), result.end());
    return {original, original == result ? "True" : "False"};
}
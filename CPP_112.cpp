string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            result += s[i];
        }
    }
    string palindromeCheck = (result == string(result.rbegin(), result.rend())) ? "True" : "False";
    return {result, palindromeCheck};
}
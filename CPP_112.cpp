vector<string> reverse_delete(string s,string c){
    vector<string> result;
    string newStr = "";
    
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == string::npos){
            newStr += s[i];
        }
    }
    
    string reverseStr = newStr;
    reverse(reverseStr.begin(), reverseStr.end());
    
    result.push_back(newStr);
    
    if(newStr == reverseStr){
        result.push_back("True");
    }else{
        result.push_back("False");
    }
    
    return result;
}
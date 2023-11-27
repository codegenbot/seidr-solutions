vector<string> reverse_delete(string s,string c){
    vector<string> result;
    string res = "";
    
    for(int i = 0; i < s.length(); i++){
        if(c.find(s[i]) == string::npos){ // check if character is not present in c
            res += s[i]; // add character to result string
        }
    }
    
    string rev_res = res;
    reverse(rev_res.begin(), rev_res.end()); // reverse the result string
    
    if(res == rev_res){ // check if result string is palindrome
        result.push_back(res);
        result.push_back("True");
    }
    else{
        result.push_back(res);
        result.push_back("False");
    }
    
    return result;
}
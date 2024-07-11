vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for(int i=0; i<s.length(); i++) {
        bool flag = false;
        for(int j=0; j<c.length(); j++) {
            if(s[i] == c[j]) {
                flag = true;
                break;
            }
        }
        
        if(!flag) {
            temp += s[i];
        }
    }
    
    string str = temp;
    reverse(str.begin(), str.end());
    result.push_back(temp);
    result.push_back((str==temp) ? "True" : "False");
    return result;
}
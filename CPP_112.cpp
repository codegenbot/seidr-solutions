bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}
vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for(int i=0; i<s.length(); i++) {
        bool found = false;
        for(int j=0; j<c.length(); j++) {
            if(s[i] == c[j]) {
                found = true;
                break;
            }
        }
        
        if(!found) {
            temp += s[i];
        }
    }
    
    string temp2 = temp;
    reverse(temp.begin(), temp.end());
    
    result.push_back(temp);
    result.push_back((temp==temp2)?"True":"False");
    
    return result;
}
```
int solve(string s) {
    string result = "";
    for(char c : s.rbegin() + (s.size()/2),e=s.rend()) 
        if((s.size()%2 && i==e) || !s.size()%2)
            result+=c;
    return s.substr(0,s.size()-result.length());
}
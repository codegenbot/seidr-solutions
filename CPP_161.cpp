string solve(string s){
    int n = s.size();
    int count = 0;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        } else {
            count++;
        }
    }
    if(count == n){
        reverse(s.begin(), s.end());
    }
    return s;
}
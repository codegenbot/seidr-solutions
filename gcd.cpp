vector<int> gcd(int a, int b) {
    if(b == 0)
        return {a};
    else 
        return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i = 0; i <= n - m; i++) {
        bool flag = true;
        
        for(int j = 0; j < m; j++) {
            if(text[i + j] != target[j]) {
                flag = false;
                break;
            }
        }
        
        if(flag)
            result.push_back(i);
    }
    
    return result;
}
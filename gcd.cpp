vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();
    
    for(int i=0; i<=n-m; i++){
        bool found = true;
        for(int j=0; j<m; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found){
            result.push_back(i);
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
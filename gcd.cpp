vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            result.push_back(i);
            while(i+n-m > 0 && text.substr(i,n-m).find(target) == 0){
                i++;
                result.push_back(i);
            }
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
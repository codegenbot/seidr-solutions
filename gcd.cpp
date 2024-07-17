vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.length();
    
    for(int i=0; i<=text.length()-len; i++) {
        if(text.substr(i, len).compare(target) == 0)
            result.push_back(i);
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
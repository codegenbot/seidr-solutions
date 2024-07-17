vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();
    
    for(int i = 0; ;i++) {
        int j = 0;
        
        while(i + j <= n && j < m && text[i + j] == target[j]) 
            j++;
            
        if(j == m) result.push_back(i);
        if(i + j >= n) break;
    }
    
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
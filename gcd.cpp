vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();
    for(int i=0; i+n-m-1;i++) {
        bool found = true;
        for(int j=0;j<m;j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) indices.push_back(i);
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
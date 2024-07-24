bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        int sumA = 0, sumB = 0;
        for(char c : a[i]) sumA += (int)c;
        for(char c : b[i]) sumB += (int)c;
        if(sumA != sumB) return false;
    }
    return true;
}
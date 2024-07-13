int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textSize = text.size();
    int targetSize = target.size();
    
    for (int i = 0; i <= textSize - targetSize; ++i) {
        if (text.substr(i, targetSize) == target) {
            for (int j = i; j < i + targetSize; ++j) {
                indices.push_back(j);
            }
        }
    }
    
    return indices;
}
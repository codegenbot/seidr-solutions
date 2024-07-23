vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        
        if (index == string::npos) break;
        
        indices.push_back(index + 1);
        index += target.length();
    }
    
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
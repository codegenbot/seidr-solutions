vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while (index < text.size()) {
        size_t found = text.find(target, index);
        
        if (found != string::npos) {
            result.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
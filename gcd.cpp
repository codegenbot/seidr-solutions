vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        size_t found = text.find(target, start);
        
        if (found != string::npos) {
            result.push_back(found);
            start = found + 1; // Continue searching from next position
        } else {
            break; // Target is not found in the remaining part of the text
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
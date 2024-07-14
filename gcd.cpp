vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int text_len = text.length();
    int target_len = target.length();
    
    for(int i = 0; i <= text_len - target_len; ++i) {
        bool found = true;
        for(int j = 0; j < target_len; ++j) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        
        if(found) {
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
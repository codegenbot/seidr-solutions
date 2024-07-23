```cpp
vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size(), m = target.size();
    
    for (int i = 0; i <= n - m) {
        if (text.substr(i, m) == target)
            result.push_back(i);
        
        // KMP search
        int j = 0, k = 0;
        while (i + j < n && k < m && text[i + j] == target[k]) {
            j++, k++;
            if (k == m) {
                k = 0;
                i += j; 
                break;
            }
        }
    }
    
    return result;
}
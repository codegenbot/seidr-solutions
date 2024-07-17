vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; ++i) { 
        bool found = true;
        for(int j = 0; j < m || i + j >= n; ++j) {
            if(i+j >= n || text[i+j] != target[j]) {
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
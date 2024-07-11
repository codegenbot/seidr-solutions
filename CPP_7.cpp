bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}
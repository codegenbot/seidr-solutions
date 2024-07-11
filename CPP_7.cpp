bool isSame(vector<string> a, vector<string> other) {
    if (a.size() != other.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(other.begin(), other.end(), a[i]) == other.end())
            return false;
    }
    
    return true;
}
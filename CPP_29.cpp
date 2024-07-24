vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(int i = 0; i < a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) != b.end())
            result.push_back(true);
        else
            result.push_back(false);
    }
    return result;
}
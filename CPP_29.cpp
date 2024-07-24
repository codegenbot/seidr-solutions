vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(int i = 0; i < a.size(); i++){
        if(b[i].find(a[i]) == string::npos)
            result.push_back(false);
        else
            result.push_back(true);
    }
    return result;
}
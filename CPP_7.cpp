bool issame(vector<string> a,vector<string>b){
    for(string s : b) {
        if (find(a.begin(), a.end(), s) == a.end())
            return false;
    }
    return true;
}
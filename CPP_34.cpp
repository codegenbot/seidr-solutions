vector<int> unique(vector<int> l){
    vector<int> result;
    sort(l.begin(), l.end());
    for(int i=0; i<l.size(); i++){
        if(i == 0 || l[i] != l[i-1]){
            result.push_back(l[i]);
        }
    }
    return result;
}
vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    vector<int> uniqueElements;
    uniqueElements.push_back(l[0]);
    for(int i = 1; i < l.size(); i++){
        if(l[i] != l[i-1]){
            uniqueElements.push_back(l[i]);
        }
    }
    return uniqueElements;
}
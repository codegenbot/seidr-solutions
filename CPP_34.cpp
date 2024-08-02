vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    auto end = unique(l.begin(), l.end());
    l.erase(end, l.end());
    return l;
}
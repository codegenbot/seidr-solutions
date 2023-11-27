vector<int> unique(vector<int> l){
    sort(l.begin(), l.end()); // sort the vector in ascending order
    l.erase(unique(l.begin(), l.end()), l.end()); // remove duplicate elements
    return l;
}
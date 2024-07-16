int next_smallest(vector<int> lst){
    if(lst.size() < 2) return -1; // or None as per problem description
    
    vector<int>::iterator it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());

    if(lst.size() < 2) return -1; // or None as per problem description
    sort(lst.begin(), lst.end());
    
    return *(next(lst.begin(), 1));
}
int next_smallest(vector<int> lst) {
    vector<int> lstCopy(lst);
    sort(lstCopy.begin(), lstCopy.end());
    
    if (lstCopy.size() < 2) return -1;
    
    for (int i = 0; i < lstCopy.size(); i++) {
        if (i > 0 && lstCopy[i] != lstCopy[i-1]) {
            return lstCopy[i];
        }
    }
    
    return -1;
}
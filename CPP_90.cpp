int next_smallest(vector<int> lst){
    vector<int> lstCopy = lst;
    if(lst.size() < 2) return -1; // or None
    sort(lstCopy.begin(), lstCopy.end());
    for(int i=0; i<lstCopy.size()-1; i++){
        if(lstCopy[i] != lstCopy[i+1])
            return lstCopy[i+1];
    }
    return -1; // or None
}
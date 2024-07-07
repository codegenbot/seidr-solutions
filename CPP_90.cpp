vector<int>::iterator it = unique(lst.begin(), lst.end());
if(it!=lst.end()){
    it++;
    vector<int> temp(it,lst.end());
    if(temp.size()>1) return *temp.begin();
}
return -1;
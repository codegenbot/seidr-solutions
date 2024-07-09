int next_smallest(vector<int> lst){
    if(lst.size() < 2)
        return -1; 
    else {
        vector<int>::iterator it = unique(lst.begin(), lst.end());
        *it = INT_MAX;
        sort(lst.begin(), it);
        return *(lst.begin()+1);
    }
}
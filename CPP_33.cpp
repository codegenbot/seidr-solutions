vector<int> sort_third(vector<int> l){
    vector<int> l_sorted = l;
    sort(l_sorted.begin(), l_sorted.end());
    
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            l_sorted[i] = l[i];
        }
    }
    
    return l_sorted;
}
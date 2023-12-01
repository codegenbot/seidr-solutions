vector<float> sort_even(vector<float> l){
    vector<float> l_sorted = l;
    for(int i=0; i<l.size(); i+=2){
        l_sorted[i] = l[i];
    }
    sort(l_sorted.begin(), l_sorted.end());
    return l_sorted;
}
vector<float> sort_even(vector<float> l){
    vector<float> sorted_l = l;
    for(int i=0; i<l.size(); i+=2){
        sorted_l[i] = l[i];
    }
    sort(sorted_l.begin(), sorted_l.end());
    return sorted_l;
}
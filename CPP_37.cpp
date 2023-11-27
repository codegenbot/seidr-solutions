vector<float> sort_even(vector<float> l){
    vector<float> sorted_l = l;
    for(int i = 0; i < sorted_l.size(); i += 2){
        sorted_l[i] = l[i];
    }
    sort(sorted_l.begin() + 1, sorted_l.end(), greater<float>());
    return sorted_l;
}
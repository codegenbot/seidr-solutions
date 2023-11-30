vector<float> sort_even(vector<float> l){
    vector<float> sorted_l = l;
    for(int i = 0; i < sorted_l.size(); i += 2){
        if(i + 1 < sorted_l.size()){
            sort(sorted_l.begin() + i, sorted_l.begin() + i + 2);
        }
    }
    return sorted_l;
}
vector<int> sort_third(vector<int> l){
    vector<int> sorted_l = l;
    for(int i = 0; i < sorted_l.size(); i++){
        if(i % 3 == 0){
            sort(sorted_l.begin() + i, sorted_l.begin() + i + 3);
        }
    }
    return sorted_l;
}
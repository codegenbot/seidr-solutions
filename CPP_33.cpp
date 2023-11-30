vector<int> sort_third(vector<int> l){
    vector<int> sorted_l = l;
    sort(sorted_l.begin(), sorted_l.end());

    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            sorted_l[i] = l[i];
        }
    }

    return sorted_l;
}
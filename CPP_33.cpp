vector<int> sort_third(vector<int> l){
    vector<int> sorted;
    for(int i = 0; i < l.size(); i++){
        if(i%3 == 0){
            sorted.push_back(l[i]);
        }
    }
    sort(sorted.begin(), sorted.end());
    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i%3 == 0){
            l[i] = sorted[j];
            j++;
        }
    }
    return l;
}
vector<int> sort_third(vector<int> l){
    vector<int> l1 = l;
    vector<int> l2;
    sort(l1.begin(), l1.end());
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            l2.push_back(l1[i]);
        } else {
            l2.push_back(l[i]);
        }
    }
    return l2;
}
vector<int> sort_third(vector<int> l){
    vector<int> l_new = l;
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            sort(l_new.begin()+i, l_new.begin()+i+3);
        }
    }
    return l_new;
}
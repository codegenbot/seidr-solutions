vector<int> sort_third(vector<int> l){
    vector<int> lPrime = l;
    for(int i = 0; i < l.size(); i += 3){
        sort(lPrime.begin() + i, lPrime.begin() + i + 3);
    }
    return lPrime;
}
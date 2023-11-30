vector<int> sort_third(vector<int> l){
    vector<int> lPrime = l;
    vector<int> lSorted;
    
    for(int i=0; i<lPrime.size(); i++){
        if(i % 3 == 0){
            lSorted.push_back(lPrime[i]);
        }
    }
    
    sort(lSorted.begin(), lSorted.end());
    
    int j = 0;
    for(int i=0; i<lPrime.size(); i++){
        if(i % 3 == 0){
            lPrime[i] = lSorted[j];
            j++;
        }
    }
    
    return lPrime;
}
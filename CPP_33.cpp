vector<int> sort_third(vector<int> l){
    vector<int> lPrime(l);
    vector<int> sortedValues;
    for(int i=0; i<lPrime.size(); i++){
        if(i % 3 == 0){
            sortedValues.push_back(lPrime[i]);
        }
    }
    sort(sortedValues.begin(), sortedValues.end());
    int j = 0;
    for(int i=0; i<lPrime.size(); i++){
        if(i % 3 == 0){
            lPrime[i] = sortedValues[j];
            j++;
        }
    }
    return lPrime;
}
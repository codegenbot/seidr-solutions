vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> sorted;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            sorted.push_back(l[i]);
        }else{
            l_prime[i] = l[i];
        }
    }
    
    sort(sorted.begin(), sorted.end());
    
    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            l_prime[i] = sorted[j];
            j++;
        }
    }
    
    return l_prime;
}
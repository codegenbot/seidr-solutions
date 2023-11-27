vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> l_sorted;
    for(int i=0; i<l_prime.size(); i++){
        if(i%3 == 0){
            l_sorted.push_back(l_prime[i]);
        }
    }
    sort(l_sorted.begin(), l_sorted.end());
    int j = 0;
    for(int i=0; i<l_prime.size(); i++){
        if(i%3 == 0){
            l_prime[i] = l_sorted[j];
            j++;
        }
    }
    return l_prime;
}
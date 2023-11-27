vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l_prime[i] = l[i];
        }
    }
    sort(l_prime.begin(), l_prime.end());
    for(int i = 1; i < l.size(); i += 2){
        l_prime[i] = l[i];
    }
    return l_prime;
}
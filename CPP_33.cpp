vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l.size());

    for(int i = 0; i < l.size(); i++){
        l_prime[i] = l[i];
    }

    for(int i = 2; i < l.size(); i += 3){
        l_prime[i] = l[i];
    }

    sort(l_prime.begin(), l_prime.end());

    return l_prime;
}
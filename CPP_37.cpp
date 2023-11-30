vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = l[i];
        }
        else{
            l_prime[i] = l[i-1];
        }
    }
    sort(l_prime.begin(), l_prime.end());
    return l_prime;
}
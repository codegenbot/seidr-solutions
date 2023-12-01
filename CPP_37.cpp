vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;

    // Sort even indices of l_prime
    for(int i = 0; i < l_prime.size(); i += 2){
        for(int j = i+2; j < l_prime.size(); j += 2){
            if(l_prime[j] < l_prime[i]){
                swap(l_prime[i], l_prime[j]);
            }
        }
    }

    return l_prime;
}
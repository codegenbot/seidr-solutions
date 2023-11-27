vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l);

    for(int i=0; i<l_prime.size(); i++){
        if(i%3 == 0){
            for(int j=i+1; j<l_prime.size(); j++){
                if(j%3 == 0 && l_prime[j] < l_prime[i]){
                    swap(l_prime[i], l_prime[j]);
                }
            }
        }
    }

    return l_prime;
}
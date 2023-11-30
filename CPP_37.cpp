vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size()); // create a new vector of same size as l
    
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){ // even index
            l_prime[i] = l[i]; // copy the value from l to l_prime
        }
        else{ // odd index
            l_prime[i] = l_prime[i-1]; // copy the value from previous index
        }
    }
    
    sort(l_prime.begin(), l_prime.end()); // sort the even indices
    
    return l_prime;
}
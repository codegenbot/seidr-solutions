vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    int k = 0;
    for(int j=0; j<l.size(); j++){
        if(j % 2 != 0){
            l_prime.insert(l_prime.begin() + j, l_prime[k]);
            k++;
        }
    }
    return l_prime;
}
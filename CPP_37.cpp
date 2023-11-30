vector<float> sort_even(vector<float> l){
    vector<float> l_prime;

    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l_prime.push_back(l[i]);
        }else{
            l_prime.push_back(l_prime[i-1]);
        }
    }

    sort(l_prime.begin(), l_prime.end());

    return l_prime;
}
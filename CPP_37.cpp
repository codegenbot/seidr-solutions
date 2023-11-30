vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    int j = 0;
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l[i] = l_prime[j];
            j++;
        }
    }
    return l;
}
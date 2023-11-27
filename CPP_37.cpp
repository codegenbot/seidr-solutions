vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    vector<float> sorted_even;

    for(int i = 0; i<l.size(); i++){
        if(i%2 == 0){
            sorted_even.push_back(l[i]);
        }
        l_prime.push_back(l[i]);
    }

    sort(sorted_even.begin(), sorted_even.end());

    for(int i = 0, j = 0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = sorted_even[j];
            j++;
        }
    }

    return l_prime;
}
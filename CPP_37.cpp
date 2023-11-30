vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;
    for (int i = 0; i < l.size(); i += 2) {
        l_prime[i] = l[i];
    }
    sort(l_prime.begin(), l_prime.end());
    return l_prime;
}
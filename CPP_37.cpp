vector<float> sort_even(vector<float> l);
vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l);

    for(int i=0; i<l_prime.size(); i+=2){
        for(int j=i+2; j<l_prime.size(); j+=2){
            if(l_prime[i] > l_prime[j]){
                swap(l_prime[i], l_prime[j]);
            }
        }
    }

    return l_prime;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
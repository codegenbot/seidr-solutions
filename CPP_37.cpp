vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    for(int i=0; i<l.size(); i++){
        if(i%2 != 0){
            l_prime.insert(l_prime.begin()+i, l[i]);
        }
    }
    return l_prime;
}
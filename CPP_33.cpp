vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> l_third;

    for(int i=0; i<l_prime.size(); i++){
        if(i % 3 == 0){
            l_third.push_back(l_prime[i]);
        }
    }

    sort(l_third.begin(), l_third.end());

    for(int i=0; i<l_prime.size(); i++){
        if(i % 3 == 0){
            l_prime[i] = l_third[i / 3];
        }
    }

    return l_prime;
}
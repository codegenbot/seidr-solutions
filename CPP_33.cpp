vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> l_third;

    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            l_third.push_back(l[i]);
        }
    }

    sort(l_third.begin(), l_third.end());

    int j = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            l_prime[i] = l_third[j];
            j++;
        }
    }

    return l_prime;
}
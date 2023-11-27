vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    for (int i = 0; i < l.size(); i++){
        if (i % 3 == 0){
            for (int j = i + 3; j < l.size(); j += 3){
                if (l[j] < l_prime[i]){
                    l_prime[i] = l[j];
                }
            }
        }
    }
    return l_prime;
}
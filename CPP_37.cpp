vector<float> even_vals;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            even_vals.push_back(l[i]);
        }
    }
    sort(even_vals.begin(), even_vals.end());
    vector<float> l_prime = l;
    int count = 0;
    for (int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            l_prime[i] = even_vals[count];
            count++;
        }
    }
    return l_prime;
}
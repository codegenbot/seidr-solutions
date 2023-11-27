vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    vector<float> even_values;
    
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            even_values.push_back(l[i]);
        }
        l_prime[i] = l[i];
    }
    
    sort(even_values.begin(), even_values.end());
    
    int even_index = 0;
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = even_values[even_index];
            even_index++;
        }
    }
    
    return l_prime;
}
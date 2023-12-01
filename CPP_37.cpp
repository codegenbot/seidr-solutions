vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;
    vector<float> even_values;
    
    for(int i=0; i<l.size(); i+=2){
        even_values.push_back(l[i]);
    }
    
    sort(even_values.begin(), even_values.end());
    
    for(int i=0; i<l.size(); i+=2){
        l_prime[i] = even_values[i/2];
    }
    
    return l_prime;
}
vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;
    vector<float> even_values;
    
    // Get the even values from l
    for(int i = 0; i < l.size(); i += 2){
        even_values.push_back(l[i]);
    }
    
    // Sort the even values
    sort(even_values.begin(), even_values.end());
    
    // Replace the even values in l_prime with the sorted even values
    for(int i = 0; i < l_prime.size(); i += 2){
        l_prime[i] = even_values[i/2];
    }
    
    return l_prime;
}
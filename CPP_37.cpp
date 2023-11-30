vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    vector<float> even_indices;
    
    // Get the values of even indices in l
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    
    // Sort the even indices values
    sort(even_indices.begin(), even_indices.end());
    
    // Construct the final vector l_prime
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime.push_back(l[i]);
        } else {
            l_prime.push_back(even_indices[i/2]);
        }
    }
    
    return l_prime;
}
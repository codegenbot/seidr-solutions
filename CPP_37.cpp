vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size()); // create a new vector to store the modified values
    
    // Copy the odd indices from l to l_prime
    for(int i=0; i<l.size(); i+=2){
        l_prime[i] = l[i];
    }
    
    // Copy the even indices from l to l_prime and sort them
    vector<float> even_indices;
    for(int i=1; i<l.size(); i+=2){
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());
    
    // Fill the even indices of l_prime with the sorted values
    int index = 1;
    for(int i=0; i<even_indices.size(); i++){
        l_prime[index] = even_indices[i];
        index += 2;
    }
    
    return l_prime;
}
vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> l_divisible_by_three_indices;
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            l_divisible_by_three_indices.push_back(i);
        }
    }
    
    sort(l_divisible_by_three_indices.begin(), l_divisible_by_three_indices.end(), 
         [&](int a, int b){
            return l[a] < l[b];
         });
    
    for(int index : l_divisible_by_three_indices){
        l_prime[index] = l[index];
    }
    
    return l_prime;
}
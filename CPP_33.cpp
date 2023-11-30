vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> sorted_values;
    
    for(int i=0; i<l.size(); i++){
        if(i%3 == 0){
            sorted_values.push_back(l[i]);
        }
    }
    
    sort(sorted_values.begin(), sorted_values.end());
    
    for(int i=0; i<l.size(); i++){
        if(i%3 == 0){
            l_prime[i] = sorted_values.front();
            sorted_values.erase(sorted_values.begin());
        }
    }
    
    return l_prime;
}
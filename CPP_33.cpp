vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> divisible_by_three_indices;

    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            divisible_by_three_indices.push_back(i);
        }
    }

    for(int i=0; i<divisible_by_three_indices.size(); i++){
        int index = divisible_by_three_indices[i];
        l_prime[index] = l[index];
    }

    sort(l_prime.begin(), l_prime.end());

    return l_prime;
}
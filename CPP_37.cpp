vector<float> sort_even(vector<float> l){
    vector<float> l_prime = l;
    vector<float> even_indexes;

    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            even_indexes.push_back(l[i]);
        }
    }

    sort(even_indexes.begin(), even_indexes.end());

    int index = 0;
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = even_indexes[index];
            index++;
        }
    }

    return l_prime;
}
vector<float> even_elems;
    vector<float> l_sorted;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
        } else {
            l_sorted.push_back(l[i]);
        }
    }
    
    sort(even_elems.begin(), even_elems.end());
    
    int even_index = 0;
    int odd_index = 0;
    vector<float> l_prime;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime.push_back(even_elems[even_index]);
            even_index++;
        } else {
            l_prime.push_back(l_sorted[odd_index]);
            odd_index++;
        }
    }
    
    return l_prime;
}
vector<float> l_prime = l;
    
    vector<float> even_values;
    for (int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    
    sort(even_values.begin(), even_values.end());
    
    int index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_values[index];
            index++;
        }
    }
    
    return l_prime;
}
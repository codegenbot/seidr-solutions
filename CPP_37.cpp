vector<float> l_copy = l;
    vector<float> sorted_even;

    sort(l_copy.begin(), l_copy.end());
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            sorted_even.push_back(l_copy[i]);
        } else {
            sorted_even.push_back(l[i]);
        }
    }

    return sorted_even;
}
vector<float> l_odd, l_even;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());
    vector<float> result;
    int even_index = 0, odd_index = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(l_even[even_index++]);
        } else {
            result.push_back(l_odd[odd_index++]);
        }
    }
    return result;
}
vector<float> l_odd;
    vector<float> l_even;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        }
        else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());
    vector<float> l_sorted;
    int index_odd = 0;
    int index_even = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_sorted.push_back(l_even[index_even]);
            ++index_even;
        }
        else {
            l_sorted.push_back(l_odd[index_odd]);
            ++index_odd;
        }
    }
    return l_sorted;
}
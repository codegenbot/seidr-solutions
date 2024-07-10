vector<float> l_odd;
    vector<float> l_even;
    vector<float> l_sorted_even;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
            l_sorted_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }

    sort(l_sorted_even.begin(), l_sorted_even.end());

    vector<float> result;
    int index_even = 0, index_odd = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l_even[index_even]);
            index_even++;
        } else {
            result.push_back(l_odd[index_odd]);
            index_odd++;
        }
    }

    return result;
}
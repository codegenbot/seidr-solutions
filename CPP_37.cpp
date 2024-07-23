vector<float> l_odd, l_even;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());
    for (int i = 0, j = 0, k = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = l_even[j++];
        } else {
            l[i] = l_odd[k++];
        }
    }
    return l;
}
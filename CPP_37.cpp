vector<float> l_parity = l;
    vector<float> l_even;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        }
    }

    sort(l_even.begin(), l_even.end());

    int evenIndex = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_parity[i] = l_even[evenIndex++];
        }
    }

    return l_parity;
}
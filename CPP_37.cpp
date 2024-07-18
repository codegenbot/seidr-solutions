vector<float> l_odd;
    vector<float> l_even;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_even.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even.begin(), l_even.end());

    vector<float> result;
    int evenIdx = 0;
    int oddIdx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l_even[evenIdx++]);
        } else {
            result.push_back(l_odd[oddIdx++]);
        }
    }

    return result;
}
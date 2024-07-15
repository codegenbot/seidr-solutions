vector<float> sorted_even;

    vector<float> odds;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            odds.push_back(l[i]);
        }
    }

    sort(odds.begin(), odds.end());

    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            sorted_even.push_back(odds[even_index++]);
        } else {
            sorted_even.push_back(l[i]);
        }
    }

    return sorted_even;
}
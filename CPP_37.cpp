vector<float> even_indexes, sorted_even;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indexes.push_back(l[i]);
            sorted_even.push_back(l[i]);
        }
    }
    sort(sorted_even.begin(), sorted_even.end());
    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even[j];
            j++;
        }
    }
    return l;
}
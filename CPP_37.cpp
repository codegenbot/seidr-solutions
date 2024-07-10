vector<float> even_elems;
    vector<float> sorted_even_elems;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
            sorted_even_elems.push_back(l[i]);
        }
    }

    sort(sorted_even_elems.begin(), sorted_even_elems.end());

    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l[i] = sorted_even_elems[j];
            ++j;
        }
    }

    return l;
}
vector<float> even_elems;
    vector<float> sorted_even_elems;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
            sorted_even_elems.push_back(l[i]);
        }
    }
    sort(sorted_even_elems.begin(), sorted_even_elems.end());
    int sorted_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_elems[sorted_index];
            sorted_index++;
        }
    }
    return l;
}
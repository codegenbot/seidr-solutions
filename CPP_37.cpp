vector<float> even_elems;
    for (int i = 0; i < l.size(); i += 2) {
        even_elems.push_back(l[i]);
    }

    sort(even_elems.begin(), even_elems.end());

    for (int i = 0, j = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_elems[j++];
        }
    }

    return l;
}
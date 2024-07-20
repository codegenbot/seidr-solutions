bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> sort_even(vector<float> l){
    vector<float> even_elems;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_elems.push_back(l[i]);
        }
    }
    sort(even_elems.begin(), even_elems.end());
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = even_elems[j];
            j++;
        }
    }
    return l;
}
vector<float> sort_even(vector<float> l){
    vector<float> evens;
    for (int i = 0; i < l.size(); i += 2) {
        evens.push_back(l[i]);
    }
    sort(evens.begin(), evens.end());
    for (int i = 0, j = 0; i < l.size(); i += 2, j++) {
        l[i] = evens[j];
    }
    return l;
}
vector<float> sort_even(vector<float> l){
    vector<float> even_elements;
    for (int i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }
    sort(even_elements.begin(), even_elements.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); i += 2) {
        l[i] = even_elements[even_index++];
    }
    return l;
}
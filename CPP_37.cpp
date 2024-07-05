vector<float> sort_even(vector<float> l) {
    vector<float> evens;
    // Collect even index elements
    for (size_t i = 0; i < l.size(); i += 2) {
        evens.push_back(l[i]);
    }
    // Sort the even indexed elements
    sort(evens.begin(), evens.end());
    // Place sorted even index elements back into the vector
    for (size_t i = 0; i < evens.size(); ++i) {
        l[i * 2] = evens[i];
    }
    return l;
}
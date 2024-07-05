vector<float> sort_even(vector<float> l) {
    vector<float> even_elements;
    // Extracting even index elements
    for (size_t i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }
    // Sorting the even index elements
    sort(even_elements.begin(), even_elements.end());
    // Replacing even index elements in the original vector with sorted elements
    for (size_t i = 0; i < even_elements.size(); ++i) {
        l[i * 2] = even_elements[i];
    }
    return l;
}
vector<float> sort_even(vector<float> l){
    vector<float> result;
    vector<float> even_indices;

    // Store the even indices values in a separate vector
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }

    // Sort the even indices values
    sort(even_indices.begin(), even_indices.end());

    // Reconstruct the result vector
    int even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_index]);
            even_index++;
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}
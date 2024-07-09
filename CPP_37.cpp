vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // Find the smallest even element in the remaining elements
            float smallest = *min_element(l.begin() + i + 1, l.end());
            result.push_back(smallest);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) { // even index
            vector<float> evens(l.begin() + i, l.begin() + i + 1);
            sort(evens.begin(), evens.end());
            result.push_back(evens[0]);
        } else { // odd index
            bool found = false;
            for (float n : l) {
                if (!found) {
                    found = issame({n}, vector<float>(l.begin() + i, l.begin() + i + 1));
                }
                if (found) {
                    result.push_back(n);
                    break;
                }
            }
        }
    }
    return result;
}
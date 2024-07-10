vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) { // even index
            vector<float> temp(l.begin() + i, l.begin() + i + 1);
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else { // odd index
            result.push_back(l[i]);
        }
    }
    return result;
}
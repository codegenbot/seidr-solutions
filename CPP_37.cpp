vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // even indices, sort them
            vector<float> evenVals;
            copy_if(l.begin(), l.end(), back_inserter(evenVals), bind2nd(greater_equal<float>(), l[i]));
            result[i] = *min_element(evenVals.begin(), evenVals.end());
        } else {
            // odd indices, keep the same
            result[i] = l[i];
        }
    }
    return result;
}
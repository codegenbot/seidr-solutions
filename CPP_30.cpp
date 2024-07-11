bool issame(vector<float> a, vector<float> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

// In the main function:
assert(issame(get_positive({}), {}));
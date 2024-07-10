bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

assert(issame(sorted_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
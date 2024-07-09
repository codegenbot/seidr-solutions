vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    sort(even_indices.begin(), even_indices.end());

    vector<float> result;
    int even_idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_idx++]);
        } else {
            result.push_back(l[i]);
        }
    }

    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}),
                   {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}
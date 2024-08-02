vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool compare_vectors(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

assert(compare_vectors(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {1, 2, 3}));
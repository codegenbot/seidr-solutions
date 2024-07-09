bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
        if (!boost::any_cast<bool>(value)) continue; // skip non-integer values
        result.push_back(boost::any_cast<int>(value));
    }
    return result;
}

int main() {
    assert(filter_integers({3, 'c', 3, 3, 'a', 'b'}) == vector<int>({3, 3, 3}));
    return 0;
}
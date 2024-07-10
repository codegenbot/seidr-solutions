bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> input = {123, 456, 789, 246, 135};
    vector<int> expected_output = {123, 135, 789};

    vector<int> result = unique_digits(input);

    assert(issame(result, expected_output));

    return 0;
}
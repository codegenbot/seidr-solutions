bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list_any values);

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
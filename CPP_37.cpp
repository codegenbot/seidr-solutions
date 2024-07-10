bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void sort_even(vector<float>& l);

int main() {
    vector<float> l = {3, 5, 1, 4, 2, 6};
    vector<float> sorted_l = {1, 4, 2, 5, 3, 6};
    sort_even(l);
    if (issame(l, sorted_l)) {
        cout << "Sorted even indices match expected result." << endl;
    } else {
        cout << "Sorted even indices do not match expected result." << endl;
    }
    return 0;
}
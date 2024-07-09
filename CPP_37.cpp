```cpp
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) { // even index
            vector<float> evens(l.begin() + i, l.begin() + i + 1);
            sort(evens.begin(), evens.end());
            result.push_back(evens[0]);
        } else { // odd index
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) , {-12, 8, 4, 5, 2, 11, 12, 23, -10}));
    return 0;
}
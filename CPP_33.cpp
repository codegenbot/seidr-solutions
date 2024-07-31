bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(l_copy.begin() + i, l_copy.begin() + i + 3);
        }
    }
    return l_copy;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 2, 4, 8, 9, 3, 1}));
    return 0;
}
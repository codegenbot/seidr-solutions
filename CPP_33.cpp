bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            int start = i;
            while (i < l.size() && i % 3 == 0) {
                ++i;
            }
            sort(l.begin() + start, l.begin() + i);
        }
    }
    return l;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
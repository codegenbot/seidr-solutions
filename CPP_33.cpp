vector<int> sort_third(vector<int> l) {
    for (int i = 0; i < l.size(); i += 3) {
        sort(l.begin() + i, l.begin() + min(i + 3, static_cast<int>(l.size())));
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
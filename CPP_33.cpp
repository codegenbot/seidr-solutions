bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> solve(vector<int> l) {
    vector<int> res = l;
    vector<int> sorted_third;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_third.push_back(l[i]);
        }
    }
    sort(sorted_third.begin(), sorted_third.end());
    int idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            res[i] = sorted_third[idx++];
        }
    }
    return res;
}

int main() {
    vector<int> sorted_third = solve({5, 6, 3, 4, 8, 9, 2, 1});
    assert(issame(sorted_third, {2, 6, 3, 4, 8, 9, 5, 1}));
}
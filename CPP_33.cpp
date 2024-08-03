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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sorted_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
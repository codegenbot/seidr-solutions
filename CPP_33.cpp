bool issame(vector<int> a, vector<int> b) {
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

vector<int> sort_third(vector<int> l);

int main() {
    vector<int> l = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> expected = {3, 8, 1, 6, 5, 4, 9, 2, 7};

    vector<int> result = sort_third(l);

    if (issame(result, expected)) {
        cout << "Output is correct" << endl;
    } else {
        cout << "Output is incorrect" << endl;
    }

    return 0;
}

vector<int> sort_third(vector<int> l) {
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
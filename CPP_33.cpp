bool issame(vector<int> a, vector<int> b);

vector<int> sort_third(vector<int> l) {
    vector<int> l_divisible_by_three;
    vector<int> l_not_divisible_by_three;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        } else {
            l_not_divisible_by_three.push_back(l[i]);
        }
    }

    sort(l_divisible_by_three.begin(), l_divisible_by_three.end());

    vector<int> result;
    int idx_divisible = 0;
    int idx_not_divisible = 0;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            result.push_back(l_divisible_by_three[idx_divisible]);
            idx_divisible++;
        } else {
            result.push_back(l_not_divisible_by_three[idx_not_divisible]);
            idx_not_divisible++;
        }
    }

    return result;
}

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

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
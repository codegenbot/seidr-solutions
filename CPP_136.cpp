bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> find_max_neg_min_pos(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        }
        else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {(maxNeg < 0 ? maxNeg : 0), (minPos > 0 ? minPos : 0)};
}

int main() {
    assert(issame(find_max_neg_min_pos({-6, -4, -4, -3, -100, 1}), vector<int>({ -3, 1})));
    return 0;
}
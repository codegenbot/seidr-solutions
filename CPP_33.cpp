void sort_third(vector<int>& v) {
    for (int i = 0; i < v.size(); i += 3) {
        if (i + 2 < v.size()) {
            sort(v.begin() + i, v.begin() + i + 3);
        }
    }
}

bool issame(vector<int>& v1, vector<int>& v2) {
    return v1 == v2;
}

int main() {
    vector<int> result = l;
    sort_third(result);
    vector<int> expected = l;
    sort(expected.begin(), expected.end());
    return issame(result, expected);
}
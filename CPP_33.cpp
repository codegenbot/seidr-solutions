void sort_third(vector<int>& v) {
    for (int i = 0; i < v.size(); i += 3) {
        sort(v.begin() + i, v.begin() + i + 3);
    }
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

int main() {
    vector<int> result = l;
    sort_third(result);
    vector<int> expected = l;
    sort(expected.begin(), expected.end());
    return issame(result, expected);
}
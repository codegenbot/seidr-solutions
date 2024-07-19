bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> removeDuplicates(const vector<int>& l) {
    vector<int> result = l;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(removeDuplicates({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}
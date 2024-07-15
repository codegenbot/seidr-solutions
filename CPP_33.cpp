// Define the issame function
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

// Define the sort_third function
vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            sort(res.begin() + i - 2, res.begin() + i + 1);
        }
    }
    return res;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}
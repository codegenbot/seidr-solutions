
// Define function sort_third
vector<int> sort_third(vector<int> l) {
    vector<int> res = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sort(res.begin() + i, res.begin() + i + 3);
        }
    }
    return res;
}

// Correct function signature for issame
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Ensure issame is declared before using it
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}
int main {
    bool issame(std::vector<int> a, std::vector<int> b) {
        if (a.size() != b.size()) {
            return false;
        }
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return false;
        }
        return true;
    }
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}
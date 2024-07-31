bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), std::vector<int>{31, 135}));
    return 0;
}
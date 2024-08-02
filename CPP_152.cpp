bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), std::vector<int>{2, 0, 0, 1}));
    return 0;
}
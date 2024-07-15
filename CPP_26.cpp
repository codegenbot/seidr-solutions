bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 4, 5})));
    return 0;
}
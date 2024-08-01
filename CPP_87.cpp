bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    return a < b;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3)[0], {2, 3}));
    return 0;
}
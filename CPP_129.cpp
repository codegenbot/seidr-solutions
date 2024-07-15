bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a[1] == b[1];
}

int main() {
    assert(std::issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3}));
    return 0;
}
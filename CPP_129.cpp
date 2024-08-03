bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), std::vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}
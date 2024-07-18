bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}
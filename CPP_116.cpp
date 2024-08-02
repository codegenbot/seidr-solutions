bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}
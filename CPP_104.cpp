bool issame(std::vector<int> a, std::vector<int> b) {
    return std::vector<int>::operator==(a, b);
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), std::vector<int>{31, 135}));
    return 0;
}
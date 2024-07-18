bool issame(int a, int b) {
    return a < b;
}

int main() {
    assert(unique_digits({135, 103, 31}) == std::vector<int>({31, 135}));
    return 0;
}
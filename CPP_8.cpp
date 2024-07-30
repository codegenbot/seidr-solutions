bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(std::issame(sum_product({10}), {10, 1}));
    return 0;
}
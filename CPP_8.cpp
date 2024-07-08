bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({10, 10}, sum_product({10, 10})));

    return 0;
}
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a[0] == b[0] && a[1] == b[1]; // Compare each element of the pair
}

int main() {
    auto result = sum_product({10});
    assert(issame(result, {10, 10})); // Change the expected product value to 10
    return 0;
}
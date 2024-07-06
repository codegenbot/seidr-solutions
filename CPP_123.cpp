bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(same({get_odd_collatz(1)}, {1}));
    return 0;
}
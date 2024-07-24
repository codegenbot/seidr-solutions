bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

assert(is_same(get_odd_collatz(1), std::vector<int>{1}));
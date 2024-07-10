bool is_same(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

int main() {
    assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 3), std::vector<std::vector<int>>{{2, 2}}));
    return 0;
}
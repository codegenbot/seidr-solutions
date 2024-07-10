bool is_same(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    return a == b;
}

int main() {
    assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
}
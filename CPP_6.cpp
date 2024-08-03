bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}
int main() {
    assert(same(parse_nested_parens("(()(())((()))"), vector<int>({4, 3, 2, 1, 0, -1, -2, -3, -4})));
    return 0;
}
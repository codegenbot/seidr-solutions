int main(void) {
    assert(parse_nested_parens("(()(())((()))") == vector<int>({4}));
    return 0;
}
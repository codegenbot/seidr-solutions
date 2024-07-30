bool issame(std::vector<int> a, std::vector<int> b);

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}
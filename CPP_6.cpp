bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    
    return 0;
}
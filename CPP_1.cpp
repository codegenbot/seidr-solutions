bool is_same(std::vector<std::string> a, std::vector<std::string> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<std::string> expected = {"()", "(())", "(()())"};
    std::vector<std::string> result = separate_paren_groups("( ) (( )) (( )( ))");
    assert(is_same(result, expected));
    return 0;
}
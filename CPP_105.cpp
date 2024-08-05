int main() {
    std::vector<std::string> vec1 = by_length({1, 9, 4});
    std::vector<std::string> vec2 = by_length({9, 4, 1});
    assert(is_same(vec1, vec2));
    assert(is_same(by_length({9, 4, 8}), {"Nine", "Eight", "Four"});

    return 0;
}
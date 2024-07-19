bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}
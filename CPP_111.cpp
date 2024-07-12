int main() {
    assert(issameInt(histogram("a"), {{make_pair('a', 0), 0}, {make_pair('a', 1), 1}}));
    return 0;
}
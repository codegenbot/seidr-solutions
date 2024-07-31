main() {
    assert(is_sorted({1, 2, 3, 4}));
    assert(is_sorted({-5, -1, 0, 3}));
    assert(!is_sorted({4, 3, 2, 1}));
    assert(!is_sorted({1, 2, 3, 3}));
}
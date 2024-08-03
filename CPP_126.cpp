int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(!is_sorted({4, 3, 2, 1}));
    assert(!is_sorted({1, 2, 2, 4}));

    return 0;
}
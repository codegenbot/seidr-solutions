int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    assert(is_sorted({3, 7, 9, 12}) == true);
    assert(is_sorted({5, 5, 6, 6}) == false);
    return 0;
}
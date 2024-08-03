int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(v);
    assert (issame(v, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}
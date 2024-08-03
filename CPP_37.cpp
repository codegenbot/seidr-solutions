int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> tmp = v;
    sort_even(tmp);
    assert(issame(tmp, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}
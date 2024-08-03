int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(v);
    std::vector<float> expected_output = {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10};
    assert(issame(v, expected_output));
    return 0;
}
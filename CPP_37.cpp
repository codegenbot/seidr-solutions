int main() {
    vector<float> input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(input);
    assert(issame(input, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}
int main1() {
    vector<int> test_input = {1, 3, 5, 2, 6, 4};
    vector<int> expected_output = {1, 3, 5, 5, 6, 6};
    vector<int> computed_output = rolling_max(test_input);

    assert(issame(expected_output, computed_output));

    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}
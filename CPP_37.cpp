int main() {
    vector<float> values = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> temp = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(temp);
    vector<float> expected_output = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(issame(temp, expected_output));
    
    // Additional test with direct argument
    vector<float> direct_input = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(direct_input);
    vector<float> direct_expected_output = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(issame(direct_input, direct_expected_output));

    return 0;
}
int main() {
    vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected_output = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    
    vector<int> result = incr_list(input);
    assert(issame(result, expected_output));
    
    return 0;
}
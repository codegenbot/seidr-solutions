int main() {
    vector<float> input = {3.5, 2.0, 1.2, 4.8, 5.3};
    vector<float> sorted_even = sort_even(input);
    
    assert(issame(sorted_even, vector<float>{1.2, 2.0, 3.5, 4.8, 5.3}));
    
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    return 0;
}
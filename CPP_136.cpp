#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

bool test_largest_smallest_integers(){
    vector<int> input = {-3, 5, -2, 10, -8};
    vector<int> expected_output = {-2, 5};
    vector<int> output = largest_smallest_integers(input);
    return issame(expected_output, output);
}
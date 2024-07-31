#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int largest_negative = 0;
    int smallest_positive = 0;

    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }

    result[0] = largest_negative;
    result[1] = smallest_positive;

    return result;
}

int main() {
    vector<int> test_input = {-5, 2, 1, -10, 3};
    vector<int> expected_output = {-5, 1};
    vector<int> result = largest_smallest_integers(test_input);
    assert(issame(result, expected_output));
    return 0;
}
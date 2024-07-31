#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
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
    vector<int> input = {-5, 3, -2, 8, -10, 4};
    vector<int> expected_output = {-2, 3};
    vector<int> output = largest_smallest_integers(input);

    assert(issame(expected_output, output));

    return 0;
}
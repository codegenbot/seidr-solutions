#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = 0;
    int smallest_positive = 0;

    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }

    return { largest_negative, smallest_positive };
}

int main() {
    vector<int> input_lst { -9, -2, -5, 3, 8, 4 };
    vector<int> expected_output { -2, 3 };
    vector<int> actual_output = largest_smallest_integers(input_lst);
    assert(issame(actual_output, expected_output));

    return 0;
}
#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main() {
    vector<int> test_input = {3, -7, 9, 2, -5, 6};
    vector<int> expected_output = {-5, 2};

    vector<int> result = largest_smallest_integers(test_input);

    if (issame(result, expected_output)) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }

    return 0;
}
#include <vector>
#include <algorithm>

using namespace std;

bool are_equal(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<int> incr_list(vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}

int main() {
    vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected = {6, 3, 6, 3, 4, 4, 10, 1, 124};

    if (are_equal(incr_list(input), expected)) {
        // Output matches the expected result
    } else {
        // Output does not match the expected result
    }

    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sortArray(const vector<int>& array) {
    vector<int> sorted_array = array;
    int sum = sorted_array[0] + sorted_array[sorted_array.size() - 1];
    if (sum % 2 == 0) {
        sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

int main() {
    assert(issame(sortArray({21, 14, 23, 11}), {23, 21, 14, 11}));
    // Additional test cases...

    return 0;
}
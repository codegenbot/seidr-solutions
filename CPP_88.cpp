#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_same(const vector<int>& a, const vector<int>& b) {
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

vector<int> sort_array(const vector<int>& array) {
    vector<int> sorted_array = array;
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 0) {
        sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}

int main() {
    vector<int> sorted_array = sort_array({21, 14, 23, 11});
    vector<int> expected = {23, 21, 14, 11};
    assert(is_same(sorted_array, expected));
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

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

int contestMain() {
    vector<int> sorted_array = sort_array({21, 14, 23, 11});
    vector<int> expected = {23, 21, 14, 11};
    assert(sorted_array == expected);
    return 0;
}
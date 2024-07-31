#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert> // Include the <cassert> header

using namespace std;

bool issame(vector<int> a, vector<int> b) { // Update function signature
    return a == b;
}

vector<int> sort_array(const vector<int>& arr) {
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a != count_b) {
            return count_a < count_b;
        } else {
            return a < b;
        }
    });
    return sorted_arr;
}

int main() { // Changed function name to 'main'
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32})); // Updated the function call
    cout << "Test passed!" << endl;
    return 0;
}
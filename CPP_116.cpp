#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert> // Include assert header
using namespace std;

bool issame(vector<int> a, vector<int> b) { // Change the parameter types in issame function
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

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), vector<int>{2, 4, 8, 16, 32})); // Use assert with std namespace
    cout << "Test passed!" << endl;
    return 0;
}
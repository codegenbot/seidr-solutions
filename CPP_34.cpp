#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

// Function to remove duplicates from a sorted vector
vector<int> unique_sorted_vector(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

// Function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Test case
    assert(issame(unique_sorted_vector({5, 3, 5, 2, 3, 3, 9, 0, 123}), vector<int>{0, 2, 3, 5, 9, 123}));
    cout << "Test passed!" << endl;
    return 0;
}
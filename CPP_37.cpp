#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> even_elements;
    // Extracting even index elements
    for (size_t i = 0; i < l.size(); i += 2) {
        even_elements.push_back(l[i]);
    }
    // Sorting the even index elements
    sort(even_elements.begin(), even_elements.end());
    // Replacing even index elements in the original vector with sorted elements
    for (size_t i = 0; i < even_elements.size(); ++i) {
        l[i * 2] = even_elements[i];
    }
    return l;
}

// Helper function to check equality of two vectors
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    // Test case
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    cout << "All tests passed!" << endl;
    return 0;
}
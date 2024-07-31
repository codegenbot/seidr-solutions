#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

// Forward declarations
vector<int>& incr_list(vector<int>& l);
bool issame(const vector<int>& a, const vector<int>& b);

// Function to increment all elements of a vector by 1
vector<int>& incr_list(vector<int>& l) {
    for (int& num : l) {
        num++;
    }
    return l;
}

// Function to check if two vectors are the same
bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
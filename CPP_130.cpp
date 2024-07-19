// Add necessary includes
#include <vector>
#include <cassert>

// Define function signature
vector<int> tri(int n);

// Define function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

// Implement the tri function
vector<int> tri(int n) {
    vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    result.push_back(2);
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}

// Add test cases in main function
int main() {
    assert(issame(tri(1), {1, 3}));
    // Add more test cases as needed
    return 0;
}
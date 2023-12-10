#include <vector>
#include <iostream>
using namespace std;

// Function to find the optimal cutting point and return the two subvectors
vector<int> solve(vector<int>& v) {
    // Initialize variables
    int n = v.size();
    vector<int> left, right;
    int minDiff = INT_MAX;
    int cutPoint = 0;

    // Iterate over each element in the vector
    for (int i = 1; i < n; i++) {
        // Calculate the difference between the current element and its predecessor
        int diff = abs(v[i] - v[i - 1]);

        // Check if the difference is less than the minimum difference so far
        if (diff < minDiff) {
            // Update the minimum difference and the cut point
            minDiff = diff;
            cutPoint = i;
        }
    }

    // Fill in the left and right subvectors with elements from the input vector
    for (int i = 0; i < cutPoint; i++) {
        left.push_back(v[i]);
    }
    for (int i = cutPoint + 1; i < n; i++) {
        right.push_back(v[i]);
    }

    // Return the two subvectors
    return {left, right};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> left, right;
    tie(left, right) = solve(v);

    cout << "Left subvector: ";
    for (int x : left) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Right subvector: ";
    for (int x : right) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
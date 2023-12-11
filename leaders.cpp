
#include <iostream>
#include <vector>
using namespace std;

// Function to find leaders in a vector
vector<int> leaders(vector<int> v) {
    // Initialize current leader and result vector
    int currentLeader = INT_MIN;
    vector<int> result;

    // Iterate through the vector from right to left
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= currentLeader) {
            result.push_back(v[i]);
            currentLeader = v[i];
        }
    }

    return result;
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Call leaders function with the appropriate arguments
    vector<int> result = leaders(v);

    // Print the result
    cout << "Leaders: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
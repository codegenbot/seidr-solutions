#include <vector>
#include <iostream>
using namespace std;

// Function to find leaders in a vector
vector<int> leaders(vector<int> nums) {
    // ... (same as before)
}

// Main function to call the leaders function and print output
int main() {
    // Test case 1: empty vector
    vector<int> nums;
    cout << "Leaders in empty vector: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;

    // Test case 2: non-empty vector with only one element
    nums = {1};
    cout << "Leaders in non-empty vector with only one element: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;

    // Test case 3: non-empty vector with multiple elements
    nums = {1, 2, 3, 4};
    cout << "Leaders in non-empty vector with multiple elements: ";
    for (auto leader : leaders(nums)) {
        cout << leader << " ";
    }
    cout << endl;
}
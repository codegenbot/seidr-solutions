
#include <iostream>
#include <vector>

using namespace std;

// Function to find the leaders in a given vector
vector<int> getLeaders(const vector<int>& v) {
    vector<int> result;

    // Check if the input vector is empty
    if (v.empty()) {
        return result;
    }

    // Loop through the vector and find the leaders
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        bool isLeader = true;

        // Check if the current element is greater than or equal to all the elements to its right
        for (auto jt = it + 1; jt != v.rend() && *jt > *it; ++jt) {
            if (*jt <= *it) {
                isLeader = false;
                break;
            }
        }

        // If the current element is a leader, add it to the result vector
        if (isLeader || it == v.rbegin()) {
            result.push_back(*it);
        }
    }

    return result;
}

int main() {
    // Test case 1: Empty vector
    vector<int> input1 = {};
    cout << "Input: ";
    for (auto it = input1.begin(); it != input1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> output1 = getLeaders(input1);
    cout << "Output: ";
    for (auto it = output1.begin(); it != output1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Test case 2: Vector with one element
    vector<int> input2 = {5};
    cout << "Input: ";
    for (auto it = input2.begin(); it != input2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> output2 = getLeaders(input2);
    cout << "Output: ";
    for (auto it = output2.begin(); it != output2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Test case 3: Vector with multiple elements
    vector<int> input3 = {1, 2, 3, 4, 5, 6, 7};
    cout << "Input: ";
    for (auto it = input3.begin(); it != input3.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> output3 = getLeaders(input3);
    cout << "Output: ";
    for (auto it = output3.begin(); it != output3.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
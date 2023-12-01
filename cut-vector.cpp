#include <iostream>
#include <vector>
using namespace std;

vector<int> cutVector(vector<int> inputVector) {
    int n = inputVector.size();
    int leftSum = 0;
    int rightSum = 0;
    
    // Calculate the sum of all elements in the vector
    for (int i = 0; i < n; i++) {
        rightSum += inputVector[i];
    }
    
    // Iterate through the vector and find the spot where the difference is minimum
    int minDiff = abs(leftSum - rightSum);
    int cutIndex = 0;
    for (int i = 0; i < n; i++) {
        leftSum += inputVector[i];
        rightSum -= inputVector[i];
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }
    
    // Create the two resulting subvectors
    vector<int> leftSubvector(inputVector.begin(), inputVector.begin() + cutIndex);
    vector<int> rightSubvector(inputVector.begin() + cutIndex, inputVector.end());
    
    // Add 0 to the end of the right subvector
    rightSubvector.push_back(0);
    
    return {leftSubvector, rightSubvector};
}

int main() {
    // Read the input vector from the user
    int n;
    cin >> n;
    vector<int> inputVector(n);
    for (int i = 0; i < n; i++) {
        cin >> inputVector[i];
    }
    
    // Call the cutVector function
    vector<int> leftSubvector, rightSubvector;
    tie(leftSubvector, rightSubvector) = cutVector(inputVector);
    
    // Print the resulting subvectors
    for (int i = 0; i < leftSubvector.size(); i++) {
        cout << leftSubvector[i] << endl;
    }
    for (int i = 0; i < rightSubvector.size(); i++) {
        cout << rightSubvector[i] << endl;
    }
    
    return 0;
}
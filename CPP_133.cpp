#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> inputVector; // Input from user

// Function to calculate sum of squares
int sum_squares(std::vector<float> lst) {
    int result = 0;
    for (float num : lst) {
        int ceilNum = std::ceil(num);
        result += std::pow(ceilNum, 2);
    }
    return result;
}

// Function to get input from user
void getInput() {
    // Get the size of vector from user
    int n;
    cin >> n;

    // Input numbers for vector
    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        inputVector.push_back(num);
    }
}

// Main function
int main() {
    getInput();
    
    int expectedOutput = sum_squares(inputVector);

    // Test case
    assert(expectedOutput == 2);

    return 0;
}
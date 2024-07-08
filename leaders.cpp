#include <iostream>
#include <vector>
using namespace std;

// Function to find leaders in a given vector
vector<int> getLeaders(const vector<int>& input) {
    // Initialize max to the first element of the input array
    int max = input[0];
    vector<int> output;

    // Loop through the rest of the elements in the input array
    for (size_t i = 1; i < input.size(); i++) {
        if (input[i] >= max) {
            // Update max to the current element and add it to the output vector
            max = input[i];
            output.push_back(max);
        }
    }

    return output;
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5, 6, 7};
    cout << "Input: ";
    for (auto it = input.begin(); it != input.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> output = getLeaders(input);
    cout << "Output: ";
    for (auto it = output.begin(); it != output.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
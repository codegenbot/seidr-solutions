#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k);

int main() {
    // Test case 1
    {
        vector<int> output = maximum({1, 2, 3, -23, 243, -400, 0}, 0);
        assert(output.empty());
    }

    // Test case 2
    {
        vector<int> output = maximum({10, 20, 30, 40, 50}, 3);
        vector<int> expected_output = {50, 40, 30};
        assert(output == expected_output);
    }

    // Add more test cases here

    cout << "All test cases passed!" << endl;
 
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}
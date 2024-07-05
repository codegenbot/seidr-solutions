#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// Define rolling_max function
vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    int current_max = numbers[0];
    for(int num : numbers) {
        if(num > current_max) {
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}

int main() {
    // Test with an example
    vector<int> input = {3, 2, 3, 100, 3};
    vector<int> expected_output = {3, 3, 3, 100, 100};
    assert(rolling_max(input) == expected_output);
    cout << "Test passed!" << endl;
    return 0;
}
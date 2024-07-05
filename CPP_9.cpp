#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// Function to compute running maximum
vector<int> rolling_max(vector<int>& numbers) {
    vector<int> result;
    if (!numbers.empty()) {
        int max_so_far = numbers[0];
        result.push_back(max_so_far);
        for (size_t i = 1; i < numbers.size(); ++i) {
            if (numbers[i] > max_so_far) {
                max_so_far = numbers[i];
            }
            result.push_back(max_so_far);
        }
    }
    return result;
}

// Function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max(vector<int>{3, 2, 3, 100, 3}), vector<int>{3, 3, 3, 100, 100}));
    cout << "Test passed!" << endl;
    return 0;
}
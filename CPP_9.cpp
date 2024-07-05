#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int current_max = numbers[0];
    for (int num : numbers) {
        if (num > current_max) {
            current_max = num;
        }
        result.push_back(current_max);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    // Add more test cases here if needed
    assert(issame(rolling_max({1, 2, 3, 4, 5}), {1, 2, 3, 4, 5}));
    assert(issame(rolling_max({5, 4, 3, 2, 1}), {5, 5, 5, 5, 5}));
    assert(issame(rolling_max({7, 7, 7}), {7, 7, 7}));
    assert(issame(rolling_max({3, 1, 4, 1, 5, 9}), {3, 3, 4, 4, 5, 9}));
    
    cout << "All test cases passed!" << endl;

    return 0;
}